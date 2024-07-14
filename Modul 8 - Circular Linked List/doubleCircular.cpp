#include "doubleCircular.h"

void createList(List &L){
    first(L) = NULL;
    last(L) = NULL;
}

address alokasi(infotype x){
    address P = new ElementList;
    info(P) = x;
    next(P) = NULL;
    prev(P) = NULL;
    return P;
}

void dealokasi(address &P){
    info(P) = NULL;
    next(P) = NULL;
    prev(P) = NULL;
}

void insertFirst(List &L, address P){
    if (first(L) == NULL && last(L) == NULL){
        first(L) = P;
        last(L) = P;
        next(P) = first(L);
        prev(P) = last(L);
    }else{
        next(P) = first(L);
        prev(P) = last(L);
        prev(first(L)) = P;
        next(last(L)) = P;
        first(L) = P;
    }
}

void insertAfter(List &L, address Prec, address P){
    if (first(L) == last(L)){
        next(P) = first(L);
        prev(P) = last(L);
        next(last(L)) = P;
        prev(first(L)) = P;
        last(L) = P;
    }else{
        prev(P) = Prec;
        next(P) = next(Prec);
        prev(next(Prec)) = P;
        next(Prec) = P;
    }
}

void insertLast(List &L, address P){
    if (first(L) == NULL && last(L) == NULL){
        first(L) = P;
        last(L) = P;
        next(P) = first(L);
        prev(P) = last(L);
    }else{
        next(P) = first(L);
        prev(P) = last(L);
        next(last(L)) = P;
        prev(first(L)) = P;
        last(L) = P;
    }
}

address findElm(List &L, infotype x){
    address P = first(L);
    while (next(P) != first(L)){
        if (info(P) == x){
            return P;
        }
        P = next(P);
    }
    if (info(last(L)) == x){
            return last(L);
        }
    return NULL;
}

void deleteFirst(List &L, address &P){
    if (first(L) == NULL && last(L) == NULL){
        P = NULL;
        cout << "List Kosong" << endl;
    }else if (first(L) != last(L)){
        P = first(L);
        next(last(L)) = next(first(L));
        prev(next(first(L))) = last(L);
        first(L) = next(first(L));
        next(P) = NULL;
        prev(P) = NULL;
    }else{
        P = first(L);
        first(L) = NULL;
        last(L) = NULL;
        next(P) = NULL;
        prev(P) = NULL;
    }
}

void deleteAfter(List &L, address Prec, address &P){
    if (first(L) == NULL && last(L) == NULL){
        P = NULL;
        cout << "List Kosong" << endl;
    }else if (first(L) != last(L)){
        P = next(Prec);
        if (P != first(L) && P != last(L)){
            next(Prec) = next(P);
            prev(next(P)) = Prec;
            prev(P) = NULL;
            next(P) = NULL;
        }else{
            if (P == first(L)){
                deleteFirst(L, P);
            }else if (P == last(L)){
                deleteLast(L, P);
            }
        }
    }else{
        P = first(L);
        first(L) = NULL;
        last(L) = NULL;
        next(P) = NULL;
        prev(P) = NULL;
    }
}

void deleteLast(List &L, address &P){
    if (first(L) == NULL){
        cout << "List Kosong" << endl;
    }else if (first(L) != last(L)){
        P = last(L);
        next(prev(last(L))) = first(L);
        prev(first(L)) = prev(last(L));
        last(L) = prev(last(L));
        prev(P) = NULL;
        next(P) = NULL;
    }else{
        P = first(L);
        first(L) = NULL;
        last(L) = NULL;
        next(P) = NULL;
        prev(P) = NULL;
    }
}

void printInfo(List L){
    if (first(L) == NULL){
        cout << "List Kosong" << endl;
    }else{
        address P = first(L);
        while (P != last(L)){
            cout << info(P) << ", ";
            P = next(P);
        }
        cout << info(last(L)) << endl;
    }
}

void deleteByValue(List &L, infotype x){
    address P = findElm(L,x);
    if (P == NULL){

    }else if (prev(P) == last(L)){
        deleteFirst(L,P);
        dealokasi(P);
    }else if (next(P) == first(L)){
        deleteLast(L,P);
        dealokasi(P);
    }else{
        deleteAfter(L, prev(P), P);
        dealokasi(P);
    }
}

void reverseList(List L, List &L2){
    address P = last(L);
    while (P != last(L)){
        address Q = alokasi(info(P));
        insertLast(L2, Q);
        P = prev(P);
    }
}
