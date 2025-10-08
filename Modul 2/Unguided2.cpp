#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Masukkan jumlah elemen (x): ";
    cin >> x;

    int *ptr;
    ptr = new int[x];

    cout << "\nMasukkan " << x << " bilangan:\n";
    for (int i = 0; i < x; i++) {
        cout << "Elemen ke-" << i + 1 << ": ";
        cin >> *(ptr + i);
    }

    int total = 0;
    int maks = *ptr;
    int min = *ptr;

    for (int i = 0; i < x; i++) {
        int nilai = *(ptr + i);
        total = total + nilai;

        if (nilai > maks)
            maks = nilai;
        if (nilai < min)
            min = nilai;
    }

    cout << "\n=== Hasil Perhitungan ===" << endl;
    cout << "Jumlah semua bilangan = " << total << endl;
    cout << "Nilai maksimum = " << maks << endl;
    cout << "Nilai minimum = " << min << endl;

    delete[] ptr;

    return 0;
}