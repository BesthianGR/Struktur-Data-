#include "Doublylist.h"
#include <iomanip>

// Membuat list kosong
void createList(List &L) {
    L.first = NULL;
}

// Membuat node baru
address alokasi(infotype x) {
    address P = new elmList;
    P->info = x;
    P->next = NULL;
    return P;
}

// Menambahkan elemen di akhir list
void insertLast(List &L, address P) {
    if (L.first == NULL) {
        L.first = P;
    } else {
        address Q = L.first;
        while (Q->next != NULL) {
            Q = Q->next;
        }
        Q->next = P;
    }
}

// Mencari elemen berdasarkan nomor polisi
address findElm(List L, string nopol) {
    address P = L.first;
    while (P != NULL) {
        if (P->info.nopol == nopol) {
            return P;
        }
        P = P->next;
    }
    return NULL;
}

// Menghapus elemen pertama
void deleteFirst(List &L, address &P) {
    if (L.first != NULL) {
        P = L.first;
        L.first = P->next;
        P->next = NULL;
    }
}

// Menghapus elemen terakhir
void deleteLast(List &L, address &P) {
    if (L.first == NULL) return;
    else if (L.first->next == NULL) {
        P = L.first;
        L.first = NULL;
    } else {
        address Q = L.first;
        while (Q->next->next != NULL) {
            Q = Q->next;
        }
        P = Q->next;
        Q->next = NULL;
    }
}

// Menghapus elemen setelah Prec
void deleteAfter(List &L, address Prec, address &P) {
    if (Prec != NULL && Prec->next != NULL) {
        P = Prec->next;
        Prec->next = P->next;
        P->next = NULL;
    }
}

// Menampilkan isi list sesuai format contoh
void printInfo(List L) {
    if (L.first == NULL) {
        cout << "List kosong.\n";
        return;
    }

    cout << "DATA LIST 1\n";
    address P = L.first;
    while (P != NULL) {
        cout << "no polisi : " << P->info.nopol << endl;
        cout << "warna     : " << P->info.warna << endl;
        cout << "tahun     : " << P->info.tahun << endl;
        P = P->next;
    }
}