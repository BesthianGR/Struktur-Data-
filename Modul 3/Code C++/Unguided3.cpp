#include <iostream>
using namespace std;

void tampilArray(int arr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}


void tukarElemen(int arr1[3][3], int arr2[3][3], int baris, int kolom) {
    int temp = arr1[baris][kolom];
    arr1[baris][kolom] = arr2[baris][kolom];
    arr2[baris][kolom] = temp;
}

void tukarPointer(int *p1, int *p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main() {
    int array1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int array2[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    int *ptr1, *ptr2;
    int a = 5, b = 10;
    ptr1 = &a;
    ptr2 = &b;

    cout << "Array 1 awal:\n";
    tampilArray(array1);
    cout << "Array 2 awal:\n";
    tampilArray(array2);

    // Tukar elemen array di posisi (1,1)
    tukarElemen(array1, array2, 1, 1);

    cout << "\nSetelah elemen [1][1] ditukar:\n";
    cout << "Array 1:\n";
    tampilArray(array1);
    cout << "Array 2:\n";
    tampilArray(array2);

    // Tukar isi variabel yang ditunjuk pointer
    cout << "\nSebelum tukar pointer: a = " << a << ", b = " << b << endl;
    tukarPointer(ptr1, ptr2);
    cout << "Sesudah tukar pointer: a = " << a << ", b = " << b << endl;

    return 0;
}
