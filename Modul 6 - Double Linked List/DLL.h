#ifndef DLL_H_INCLUDED
#define DLL_H_INCLUDED

using namespace std;
#include <iostream>

#define info(P) P->info
#define next(P) P->next
#define prev(P) P->prev
#define first(L) L.first
#define last(L) L.last


struct lagu{
    string judul;
    string band;
};

typedef lagu infotype;
typedef struct elmlist *address;

struct elmlist{
    infotype info;
    address next;
    address prev;
};

struct list{
    address first;
    address last;
};

bool isEmpty_1302223074(list L);
void createList_1302223074(list &L);
infotype createElement_1302223074();
address createNewElmt_1302223074(infotype X);
void insertFirst_1302223074(list &L, address P);
void insertAfter_1302223074(list &L,address P, address prec);
void insertLast_1302223074(list &L, address P);
void deleteFirst_1302223074(list &L, address &P);
void deleteAfter_1302223074(list &L,address &P, address prec);
void deleteLast_1302223074(list &L, address &P);
void concat_1302223074(list L1, list L2, list &L3);
address findLagu_1302223074(string judul, list L);
void removeLagu_1302223074(string judul, list &L);
void showList_1302223074(list L);
int menu_1302223074();

#endif // DLL_H_INCLUDED
