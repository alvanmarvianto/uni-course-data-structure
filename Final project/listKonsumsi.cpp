#include "listKonsumsi.h"

void createList(ListKonsumsi &L) {
    first(L) = NULL;
    last(L) = NULL;
}

void insertFirst(ListKonsumsi &L, addressKonsumsi P) {
    if(first(L) == NULL) {
        last(L) = P;
        first(L) = P;
    } else {
        next(P) = first(L);
        prev(first(L)) = P;
        first(L) = P;
    }
}

void insertLast(ListKonsumsi &L, addressKonsumsi P){
    if(first(L) == NULL) {
        insertFirst(L,P);
    } else {
        next(last(L)) = P;
        prev(P) = last(L);
        last(L) = P;
    }
}

void deleteFirst(ListKonsumsi &L, addressKonsumsi &P){
    first(L) = P;
    next(P) = first(L);
    P = NULL;
}

void deleteLast(ListKonsumsi &L, addressKonsumsi &P){
    last(L) = P;
    prev(P) = last(L);
    P = NULL;
}

void deleteKonsumsi(ListKonsumsi &L, addressKonsumsi &P){
    if (first(L)==last(L)){
        first(L) = NULL;
        last(L) = NULL;
    } else if (first(L) == P) {
        deleteFirst(L,P);
    } else if (last(L) == P) {
        deleteLast(L,P);
    } else {
        addressKonsumsi Q = first(L);
        while (next(Q)!=P){
            Q = next(Q);
        }
        next(Q) = next(P);
        prev(next(P)) = Q;
        next(P) = NULL;
        prev(P) = NULL;
    }
}

addressKonsumsi alokasi(infotypeKonsumsi x) {
    addressKonsumsi P = new elmlistKonsumsi;
    info(P) = x;
    next(P) = NULL;
    prev(P) = NULL;
    return P;
}

void dealokasi(addressKonsumsi &P){
    delete P;
}

addressKonsumsi findElm(ListKonsumsi L, string nama) {
    addressKonsumsi P = first(L);
    while(P != NULL) {
        if(info(P).nama==nama) {
            return P;
        }
        P = next(P);
    }
    return NULL;
}

void printInfo(addressKonsumsi P){
    cout << "Nama konsumsi: " << info(P).nama << endl;
    cout << "Jumlah kalori: " << info(P).kalori << endl;
    cout << "Jumlah protein: " << info(P).protein << endl;
    cout << "Jumlah lemak: " << info(P).lemak<< endl;
    cout << "Jumlah karbohidrat: " << info(P).karbo << endl;
}
