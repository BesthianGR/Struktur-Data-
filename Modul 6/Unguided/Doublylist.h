#ifndef DOUBLYLIST_H_INCLUDED
#define DOUBLYLIST_H_INCLUDED

#include <iostream>
#include <string>
using namespace std;

struct kendaraan {
    string nopol;
    string warna;
    int tahun;
};

typedef kendaraan infotype;

struct elmList {
    infotype info;
    elmList* next;
};

typedef elmList* address;

struct List {
    address first;
};

// ==== Deklarasi fungsi/prosedur ====
void createList(List &L);
address alokasi(infotype x);
void insertLast(List &L, address P);
address findElm(List L, string nopol);
void deleteFirst(List &L, address &P);
void deleteLast(List &L, address &P);
void deleteAfter(List &L, address Prec, address &P);
void printInfo(List L);

#endif