#include "listDiet.h"

void createList(ListDiet &L) {
    first(L) = NULL;
}

void insertFirst(ListDiet &L, addressDiet P) {
    if(first(L) == NULL) {
        first(L) = P;
    } else {
        next(P) = first(L);
        first(L) = P;
    }
}

void insertLast(ListDiet &L, addressDiet P){
  if (first(L) == NULL){
    insertFirst(L,P);
  } else {
    addressDiet Q = first(L);
    while (next(Q)!=NULL){
        Q = next(Q);
    }
    next(Q) = P;
  }
}

void deleteFirst(ListDiet &L, addressDiet &P){
  if (next(first(L)) = NULL){
    first(L) = P;
  } else {
    first(L) = P;
    next(P) = first(L);
    next(P) = NULL;
  }
}

void deleteLast(ListDiet &L, addressDiet &P){
    if (next(first(L)) == NULL){
        P = first(L);
        first(L) = NULL;
  }else {
    addressDiet Q = first(L);
    while(next(next(Q)) != first(L)) {
        Q = next(Q);
    }
    P = next(Q);
    next(Q) = NULL;
  }
}

void deleteDiet(ListDiet &L, addressDiet &P){
    if (P == first(L)){
        deleteFirst(L,P);
    } else if (next(P)==NULL) {
        deleteLast(L,P);
    } else {
        addressDiet Q = first(L);
        while (next(Q)!=P){
            Q = next(Q);
        }
        next(Q) = next(P);
        next(P) = NULL;
    }
}

addressDiet alokasi(infotypeDiet x) {
    addressDiet P = new elmlistDiet;
    info(P) = x;
    next(P) = NULL;
    createList(child(P));
    return P;
}

void dealokasi(addressDiet &P){
    delete P;
}

addressDiet findElm(ListDiet L, string nama) {
    addressDiet P = first(L);
    while(P != NULL){
        if(info(P).nama == nama) {
            return P;
        }
        P = next(P);
    }
    return NULL;
}

void printInfo(addressDiet P){
    cout << "Nama diet: " <<info(P).nama << endl;
    cout << "Interval makan per jam: " <<info(P).interval << " jam" << endl;
    cout << "Volume makanan: " <<info(P).volume << endl;
}

void printList(ListDiet L){
    addressDiet P = first(L);
    int i = 1;
    while (P!= NULL){
        cout << i << ". " << info(P).nama << endl;
        i++;
    }
}

int countKonsumsi(addressDiet P){
    int n = 1;
    addressRelasi R = first(child(P));
    while (R !=NULL) {
        R = next(R);
        n++;
    }
    return n;
}
