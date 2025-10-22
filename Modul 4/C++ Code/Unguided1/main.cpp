#include <iostream>
#include <cstdlib>
#include "Playlist.h"
#include "Playlist.cpp"

using namespace std;

int main() {
    Playlist P;
    address L;

    CreatePlaylist(P);

    cout << "Menambahkan lagu The Beatles ke playlist..." << endl;

    Lagu lagu1 = {"Hey Jude", "The Beatles", 7.0};
    L = alokasi(lagu1);
    InsertLast(P, L);

    Lagu lagu2 = {"Let It Be", "The Beatles", 4.0};
    L = alokasi(lagu2);
    InsertLast(P, L);

    Lagu lagu3 = {"Yesterday", "The Beatles", 2.5};
    L = alokasi(lagu3);
    InsertLast(P, L);

    Lagu lagu4 = {"Come Together", "The Beatles", 4.2};
    L = alokasi(lagu4);
    InsertLast(P, L);

    Lagu lagu5 = {"Something", "The Beatles", 3.0};
    L = alokasi(lagu5);
    InsertLast(P, L);

    printPlaylist(P);

    cout << "Menambahkan lagu setelah lagu ke-3..." << endl;
    Lagu lagu6 = {"Here Comes The Sun", "The Beatles", 3.1};
    L = alokasi(lagu6);
    InsertAfter3(P, L);
    printPlaylist(P);

    cout << "Menghapus lagu dengan judul 'Yesterday'..." << endl;
    deleteByJudul(P, "Yesterday");
    printPlaylist(P);

    system("pause");
    return 0;
}
