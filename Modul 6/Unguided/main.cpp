#include "Doublylist.h"

int main() {
    List L;
    createList(L);
    infotype x;
    address P;

    // Input kendaraan
    for (int i = 0; i < 3; i++) {
        cout << "Masukkan nomor polisi: ";
        cin >> x.nopol;

        if (findElm(L, x.nopol) != NULL) {
            cout << "Nomor polisi sudah terdaftar\n";
            continue;
        }

        cout << "Masukkan warna kendaraan: ";
        cin >> x.warna;
        cout << "Masukkan tahun kendaraan: ";
        cin >> x.tahun;
        cout << endl;

        insertLast(L, alokasi(x));
    }

    printInfo(L);

    // Cari elemen
    string cari;
    cout << "\nMasukkan Nomor Polisi yang dicari : ";
    cin >> cari;
    P = findElm(L, cari);
    if (P != NULL) {
        cout << "\nNomor Polisi : " << P->info.nopol
             << "\nWarna        : " << P->info.warna
             << "\nTahun        : " << P->info.tahun << endl;
    } else {
        cout << "Data tidak ditemukan.\n";
    }

    // Hapus elemen tertentu
    string hapus;
    cout << "\nMasukkan Nomor Polisi yang akan dihapus : ";
    cin >> hapus;

    address Prec = NULL, Q = L.first;

    if (Q != NULL && Q->info.nopol == hapus) {
        deleteFirst(L, P);
    } else {
        while (Q != NULL && Q->next != NULL && Q->next->info.nopol != hapus) {
            Q = Q->next;
        }
        if (Q->next != NULL) {
            deleteAfter(L, Q, P);
        }
    }

    cout << "Data dengan nomor polisi " << hapus << " berhasil dihapus.\n";

    cout << endl;
    printInfo(L);

    return 0;
}