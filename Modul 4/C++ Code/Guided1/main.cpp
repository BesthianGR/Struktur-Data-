#include <iostream>
#include <cstdlib>
#include "SinglyList.h"
#include "SinglyList.cpp"

using namespace std;

int main() {
    List L;
    address P;

    CreateList(L);

    cout << "Mengisi list menggunakan InsertLast..." << endl;
    P = alokasi(9);
    InsertLast(L, P);

    P = alokasi(12);
    InsertLast(L, P);

    P = alokasi(8);
    InsertLast(L, P);

    P = alokasi(0);
    InsertLast(L, P);

    P = alokasi(2);
    InsertLast(L, P);

    cout << "isi list sekarang: ";
    printInfo(L);

    system("pause");
    return 0;
}