#ifndef SINGLYLIST_H_INCLUDED
#define SINGLYLIST_H_INCLUDED
#define Nil NULL
#include <iostream>

using namespace std;



typedef int infotype;
typedef struct ElmtList *address;

struct ElmtList {
    infotype info;
    address next;
};

struct List {
    address First;
};

void CreateList(List &L);
address Alokasi(infotype x);
void Dealokasi(address &P);
void InsertFirst(List &L, address P);
void InsertLast(List &L, address P);
void printInfo(List L);

#endif // SINGLYLIST_H_INCLUDED