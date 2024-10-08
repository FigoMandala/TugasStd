#ifndef KEPALA_H
#define KEPALA_H

#include <iostream>
#include <string>
using namespace std;

struct Pekerjaan {
    string instansi;
    string pegawai;
    int nip;
};

typedef Pekerjaan infotype;
typedef struct elmList *adr;

struct elmList {
    infotype info;
    adr next;
};

struct List {
    adr first;
};

// Primitive Functions and Procedures
void Create_List(List &L);
adr New_Elemen(infotype data);
void Insert_First(List &L, adr p);
void Insert_Last(List &L, adr p);
void Insert_After(List &L, adr prec, adr p);
void Delete_First(List &L, adr &p);
void Delete_Last(List &L, adr &p);
void Delete_After(List &L, adr prec, adr &p);
void Show(const List &L);
void SortByNip(List &L);
adr SearchByNip(const List &L, int nip);

#endif
