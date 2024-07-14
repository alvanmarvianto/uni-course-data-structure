#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED
#include <iostream>
#define first(L) L.first
#define next(P) P->next
#define info(P) P->info
using namespace std;
typedef int infotype;
typedef struct elmlist *address;

struct elmlist{
    infotype info;
    address next;
};

struct list {
    address first;
};

void createList_1302223074(list &L);
address allocate_1302223074(infotype x);
void insertFirst_1302223074(list &L, address P);
void insertAfter_1302223074(list &L, address P, address prec);
void insertLast_1302223074(list &L, address P);
void printInfo_1302223074(list L);

#endif // LIST_H_INCLUDED
