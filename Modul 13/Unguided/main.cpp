#include "circularlist.h"
#include "circularlist.cpp"
#include <iostream>
using namespace std;

address createData(string nama, string nim, char jk, float ipk)
{
    infotype x;
    x.nama = nama;
    x.nim = nim;
    x.jenis_kelamin = jk;
    x.ipk = ipk;
    return alokasi(x);
}

void sortList(List &L) {
    if (L.first == Nil) {
        return;
    }
    
    address P = L.first;
    address Q;
    infotype temp;
    
    do {
        Q = P->next;
        while (Q != L.first) {
            if (P->info.nim > Q->info.nim) {
                temp = P->info;
                P->info = Q->info;
                Q->info = temp;
            }
            Q = Q->next;
        }
        P = P->next;
    } while (P->next != L.first);
}

int main()
{
    List L;
    address P1 = Nil;
    address P2 = Nil;
    infotype x;
    
    createList(L);
    
    cout << "coba insert first, last, dan after" << endl;
    
    P1 = createData("Andi", "11", 'l', 3.6);
    insertFirst(L, P1);

    P1 = createData("Salsa", "14", 'p', 3.82);
    insertLast(L, P1);


    P1 = createData("Rizky", "10", 'l', 3.55);
    insertFirst(L, P1);

    P1 = createData("Nadia", "09", 'p', 3.7);
    insertFirst(L, P1);

    P1 = createData("Bagas", "15", 'l', 3.4);
    insertLast(L, P1);

    x.nim = "14";
    P1 = findElm(L, x);
    P2 = createData("Putri", "12", 'p', 3.65);
    insertAfter(L, P1, P2);

    x.nim = "10";
    P1 = findElm(L, x);
    P2 = createData("Dimas", "16", 'l', 3.3);
    insertAfter(L, P1, P2);

    x.nim = "11";
    P1 = findElm(L, x);
    P2 = createData("Alya", "13", 'p', 3.9);
    insertAfter(L, P1, P2);

    
    sortList(L);
    
    printInfo(L);
    
    return 0;
}