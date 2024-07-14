#ifndef LISTDIET_H_INCLUDED
#define LISTDIET_H_INCLUDED

#include "listRelasi.h"

#include <iostream>
using namespace std;

#define first(L) L.first
#define next(P) P->next
#define info(P) P->info
#define child(P) P->child

struct diet{
    string nama;
    int interval;
    int volume;
};

typedef diet infotypeDiet;
typedef struct elmlistDiet *addressDiet;

struct elmlistDiet{
    infotypeDiet info;
    ListRelasi child;
    addressDiet next;
};

struct ListDiet {
    addressDiet first;
};

void createList(ListDiet &L);   //udah
void insertFirst(ListDiet &L, addressDiet P);   //udah
void insertLast(ListDiet &L, addressDiet P);    //udah
void deleteFirst(ListDiet &L, addressDiet &P);  //udah
void deleteLast(ListDiet &L, addressDiet &P);  //udah
void deleteDiet(ListDiet &L, addressDiet &P); //udah

addressDiet alokasi(infotypeDiet x);    //udah
void dealokasi(addressDiet &P);
addressDiet findElm(ListDiet L, string nama); // udah
void printInfo(addressDiet P);
int countKonsumsi(addressDiet P);

#endif // LISTDIET_H_INCLUDED
