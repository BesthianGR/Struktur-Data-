#include <iostream>
using namespace std;

float hitungRata(int nilai[], int x) {
    float total = 0;
    for (int i = 0; i < x; i++) {
        total = total + nilai[i];
    }
    return total / x;
}

void cariNilai(int nilai[], int x, int &maks, int &min) {
    maks = nilai[0];
    min = nilai[0];
    for (int i = 1; i < x; i++) {
        if (nilai[i] > maks)
            maks = nilai[i];
        if (nilai[i] < min)
            min = nilai[i];
    }
}

int main() {
    int siswa;
    cout << "Masukkan jumlah siswa: ";
    cin >> siswa;

    int nilai[siswa];
    for (int i = 0; i < siswa; i++) {
        cout << "Nilai siswa ke-" << i + 1 << ": ";
        cin >> nilai[i];
    }

    float rata = hitungRata(nilai, siswa);

    int tertinggi, terendah;
    cariNilai(nilai, siswa, tertinggi, terendah);

    cout << "\n=== Hasil Perhitungan ===" << endl;
    cout << "Rata-rata kelas  : " << rata << endl;
    cout << "Nilai tertinggi  : " << tertinggi << endl;
    cout << "Nilai terendah   : " << terendah << endl;

    return 0;
}