#ifndef SLL_H_INCLUDED
#define SLL_H_INCLUDED

#include <iostream>
#define first(L) L.first
#define next(P) P->next
#define info(P) P->info

using namespace std;
typedef char infotype;
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
void insertLast_1302223074(list &L, address P);
void showData_1302223074(list L);
double vocalPrecentage_1302223074(list L);
void showLastK_1302223074(list L, int K);
int selectMenu_1302223074();


#endif // SLL_H_INCLUDED
