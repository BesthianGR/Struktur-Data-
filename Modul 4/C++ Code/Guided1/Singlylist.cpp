#include "SinglyList.h"


void CreateList(List &L) {
    L.First = Nil;
}

address alokasi(infotype x) {
    address P = new ElmtList;
    if (P != Nil) {
        P->info = x;
        P->next = Nil;
    }
    return P;
}

void dealokasi(address &P) {
    delete P;
}

void InsertFirst(List &L, address P) {
    P->next = L.First;
    L.First = P;
}

void InsertLast(List &L, address P) {
    if (L.First == Nil) {
        InsertFirst(L, P);
    } else {
        address Last = L.First;
        while (Last->next != Nil) {
            Last = Last->next;
        }
        Last->next = P;
    }
}

void printInfo(List L) {
    address P = L.First;
    if(P == Nil) {
        std::cout << "List Kosong!" << std::endl;
        return;
    } else {
        while (P != Nil) {
        std::cout << P->info << " ";
        P = P->next;
        }
    std::cout << std::endl;
    }
}

