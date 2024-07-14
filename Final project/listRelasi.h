#ifndef LISTRELASI_H_INCLUDED
#define LISTRELASI_H_INCLUDED

#include "listKonsumsi.h"

#include <iostream>
using namespace std;

#define first(L) L.first
#define next(P) P->next
#define info(P) P->info

typedef struct elmlistRelasi *addressRelasi;

struct elmlistRelasi{
    addressRelasi next;
    addressKonsumsi info;
};

struct ListRelasi{
    addressRelasi first;
};

void createList(ListRelasi &L);
void insertFirst(ListRelasi &L, addressRelasi P);
void deleteFirst(ListRelasi &L, addressRelasi &Q);
void deleteLast(ListRelasi &L, addressRelasi &Q);
void deleteRelasi(ListRelasi &L, addressRelasi &P);
void deleteAllRelasi(ListRelasi &L);

addressRelasi alokasi(addressKonsumsi K);
void dealokasi(addressRelasi &P);
addressRelasi findElm(ListRelasi L, addressKonsumsi K);
void printList(ListRelasi L);

#endif // LISTRELASI_H_INCLUDED
