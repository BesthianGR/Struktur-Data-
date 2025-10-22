#include "Playlist.h"

void CreatePlaylist(Playlist &P) {
    P.First = Nil;
}

address alokasi(Lagu L) {
    address P = new ElmtList;
    if (P != Nil) {
        P->info = L;
        P->next = Nil;
    }
    return P;
}

void dealokasi(address &P) {
    delete P;
    P = Nil;
}

void InsertFirst(Playlist &P, address laguBaru) {
    laguBaru->next = P.First;
    P.First = laguBaru;
}

void InsertLast(Playlist &P, address laguBaru) {
    if (P.First == Nil) {
        InsertFirst(P, laguBaru);
    } else {
        address Q = P.First;
        while (Q->next != Nil) {
            Q = Q->next;
        }
        Q->next = laguBaru;
    }
}

void InsertAfter3(Playlist &P, address laguBaru) {
    address Q = P.First;
    int count = 1;
    while (Q != Nil && count < 3) {
        Q = Q->next;
        count++;
    }

    if (Q != Nil) {
        laguBaru->next = Q->next;
        Q->next = laguBaru;
    } else {
        cout << "Playlist belum memiliki 3 lagu.\n";
    }
}

void deleteByJudul(Playlist &P, string judul) {
    if (P.First == Nil) {
        cout << "Playlist kosong.\n";
        return;
    }

    address Q = P.First;
    address Prev = Nil;

    while (Q != Nil && Q->info.judul != judul) {
        Prev = Q;
        Q = Q->next;
    }

    if (Q == Nil) {
        cout << "Lagu dengan judul \"" << judul << "\" tidak ditemukan.\n";
    } else {
        if (Prev == Nil) {
            P.First = Q->next;
        } else {
            Prev->next = Q->next;
        }
        dealokasi(Q);
        cout << "Lagu \"" << judul << "\" berhasil dihapus.\n";
    }
}

void printPlaylist(Playlist P) {
    address Q = P.First;
    if (Q == Nil) {
        cout << "Playlist kosong!" << endl;
        return;
    }

    cout << "\nDaftar Lagu dalam Playlist:" << endl;
    while (Q != Nil) {
        cout << "- Judul: " << Q->info.judul
             << " | Penyanyi: " << Q->info.penyanyi
             << " | Durasi: " << Q->info.durasi << " menit" << endl;
        Q = Q->next;
    }
    cout << endl;
}
