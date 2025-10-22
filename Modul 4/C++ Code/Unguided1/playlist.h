#ifndef PLAYLIST_H_INCLUDED
#define PLAYLIST_H_INCLUDED

#include <iostream>
#include <string>
using namespace std;

#define Nil NULL

struct Lagu {
    string judul;
    string penyanyi;
    float durasi;
};

typedef struct ElmtList *address;

struct ElmtList {
    Lagu info;
    address next;
};

struct Playlist {
    address First;
};

// Fungsi dan Prosedur
void CreatePlaylist(Playlist &P);
address alokasi(Lagu L);
void dealokasi(address &P);
void InsertFirst(Playlist &P, address laguBaru);
void InsertLast(Playlist &P, address laguBaru);
void InsertAfter3(Playlist &P, address laguBaru);
void deleteByJudul(Playlist &P, string judul);
void printPlaylist(Playlist P);

#endif // PLAYLIST_H_INCLUDED
