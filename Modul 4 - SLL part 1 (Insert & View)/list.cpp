#include <iostream>
#include "list.h"
using namespace std;

void createList_1302223074(list &L){
    first(L) = NULL;
}

address allocate_1302223074(infotype x){
    address p = new elmlist;
    info(p) = x;
    next(p) = NULL;

    return p;
}

void insertFirst_1302223074(list &L, address P){
    next(P) = first(L);
    first(L) = P;
}

void insertAfter_1302223074(list &L, address P, address prec){
    if (first(L)==NULL){
        first(L)=P;
    } else {
        next(P)=next(prec);
        next(prec)=next(P);
    }
}

void insertLast_1302223074(list &L, address P){
    if (first(L)==NULL){
        first(L) = P;
    } else {
       address q = first(L);
        while (next(q)!=NULL){
            q = next(q);
        }
        next(q)=P;
    }

}

void printInfo_1302223074(list L){
    address p = first(L);
    while (p!=NULL){
        cout << info(p) << ", ";
        p=next(p);
    }
    cout << endl;
}
