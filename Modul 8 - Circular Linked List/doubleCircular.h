#ifndef DOUBLECIRCULAR_H_INCLUDED
#define DOUBLECIRCULAR_H_INCLUDED

#include <iostream>
using namespace std;

#define info(p) p->info
#define next(p) p->next
#define prev(p) p->prev
#define first(L) L.first
#define last(L) L.last

typedef int infotype;
typedef struct ElementList *address;

struct ElementList{
    infotype info;
    address next;
    address prev;
};

struct List{
    address first;
    address last;
};

void createList(List &L);
address alokasi(infotype x);
void dealokasi(address &P);
void insertFirst(List &L, address P);
void insertAfter(List &L, address Prec, address P);
void insertLast(List &L, address P);
address findElm(List &L, infotype x);
void deleteFirst(List &L, address &P);
void deleteAfter(List &L, address Prec, address &P);
void deleteLast(List &L, address &P);
void printInfo(List L);

void deleteByValue(List &L, infotype x);
void reverseList(List L, List &L2);

#endif // DOUBLECIRCULAR_H_INCLUDED
