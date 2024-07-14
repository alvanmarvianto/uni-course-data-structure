#ifndef LISTKONSUMSI_H_INCLUDED
#define LISTKONSUMSI_H_INCLUDED

#include <iostream>
using namespace std;

#define next(P) P->next
#define prev(P) P->prev
#define first(L) L.first
#define last(L) L.last
#define info(P) P->info

struct konsumsi{
    string nama;
    int kalori;
    int protein;
    int lemak;
    int karbo;
};

typedef konsumsi infotypeKonsumsi;
typedef struct elmlistKonsumsi *addressKonsumsi;

struct elmlistKonsumsi{
    infotypeKonsumsi info;
    addressKonsumsi next;
    addressKonsumsi prev;
};

struct ListKonsumsi{
    addressKonsumsi first;
    addressKonsumsi last;
};

void createList(ListKonsumsi &L);   //udah
void insertFirst(ListKonsumsi &L, addressKonsumsi P);   //udah
void insertLast(ListKonsumsi &L, addressKonsumsi P);  //udah
void deleteFirst(ListKonsumsi &L, addressKonsumsi &P);  //udah
void deleteLast(ListKonsumsi &L, addressKonsumsi &P);  //udah
void deleteKonsumsi(ListKonsumsi &L, addressKonsumsi &P);  //udah

addressKonsumsi alokasi(infotypeKonsumsi x);    //udah
void dealokasi(addressKonsumsi &P);
addressKonsumsi findElm(ListKonsumsi L, string nama);   //udah
void printInfo(addressKonsumsi P);



#endif // LISTKONSUMSI_H_INCLUDED
