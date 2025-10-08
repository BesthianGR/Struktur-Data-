#include <iostream>
using namespace std;

void tampilSegitiga(int uk) {
    for (int i = 1; i <= uk; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main() {
    int x;
    cout << "Masukkan nilai x: ";
    cin >> x;

    cout << "\nPola segitiga angka:\n";
    tampilSegitiga(x);

    return 0;
}