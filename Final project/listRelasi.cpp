#include "listRelasi.h"

void createList(ListRelasi &L){
    first(L)=NULL;
}

void insertFirst(ListRelasi &L, addressRelasi P){
    next(P) = first(L);
    first(L) = P;
}

void deleteFirst(ListRelasi &L, addressRelasi &Q){
    Q = first(L);
    if (next(first(L))==NULL){
        first(L) = NULL;
    } else {
        Q = first(L);
        first(L) = next(Q);
        next(Q) = NULL;
    }
}
void deleteLast(ListRelasi &L, addressRelasi &Q){
    if (next(first(L))==NULL){
        Q = first(L);
        first(L) = NULL;
    } else {
        addressRelasi P = first(L);
        while (next(next(P))!=NULL){
            P = next(P);
        }
        Q = next(P);
        next(P) = NULL;
    }
}

void deleteRelasi(ListRelasi &L, addressRelasi &P){
    if (P == first(L)){
        deleteFirst(L,P);
    } else if (next(P) == NULL ){
        deleteLast(L,P);
    } else {
        addressRelasi Q = first(L);
        while (next(Q)!=P){
            Q = next(Q);
        }
        next(Q) = next(P);
        next(P) = NULL;
    }
}

void deleteAllRelasi(ListRelasi &L){
    if (first(L)!=NULL){
        addressRelasi P = first(L);
        addressRelasi Q = first(L);
        while (P != NULL){
            P = next(Q);
            dealokasi(Q);
            Q = P;
        }
    }
}

addressRelasi alokasi(addressKonsumsi K) {
    addressRelasi P = new elmlistRelasi;
    info(P) = K;
    next(P) = NULL;
    return P;
}

void dealokasi(addressRelasi &P){
    delete P;
}

addressRelasi findElm(ListRelasi L, addressKonsumsi K){
    addressRelasi P = first(L);
    while (P!=NULL){
        if (info(P)==K){
            return P;
        }
        P = next(P);
    }
    return NULL;
}

void printList(ListRelasi L){
    int i = 1;
    addressRelasi P = first(L);
    while (P!=NULL){
        cout << i << ". " << info(info(P)).nama << endl;
        i++;
        P = next(P);
    }
}
