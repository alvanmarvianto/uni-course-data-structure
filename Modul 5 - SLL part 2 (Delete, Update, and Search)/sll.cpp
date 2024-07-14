#include <iostream>
#include "sll.h"

void createList_1302223074(list &L){
    first(L) = NULL;
}

address allocate_1302223074(infotype x){
    address p = new elmlist;
    info(p) = x;
    next(p) = NULL;

    return p;
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

void showData_1302223074(list L){
    address Q = first(L);
    if (first(L)==NULL){
        cout << "MAAF LIST KOSONG" << endl;
    } else {
        while(next(Q)!=NULL){
            cout << info(Q) <<", ";
            Q = next(Q);
        }
        cout << info(Q)<< endl;
    }
}

double vocalPrecentage_1302223074(list L){
    address Q = first(L);
    double v,k;
    if (first(L)==NULL){
        return 0;
    } else {
        v=0;
        k=0;
        while(next(Q)!=NULL){
            if (info(Q)== 'a' || info(Q)=='i' || info(Q)=='u '|| info(Q)=='e' || info(Q)=='o' || info(Q)=='A' || info(Q)=='I' || info(Q)=='U' || info(Q)=='E' || info(Q)=='O'){
                v++;
            } else {
                k++;
            }
            Q = next(Q);
        }
        return (100/(v+k)*v);
    }
}

void showLastK_1302223074(list L, int K){
    int n,i;
    address Q = first(L);
    while(next(Q)!=NULL){
        n++;
        Q=next(Q);
    }
    Q = first(L);
    for(i=0;i<n-K;i++){
        Q = next(Q);
    }
    Q=next(Q);
    cout << "Angka ke-K adalah: " << info(Q) <<"\n"<< endl;
}

int selectMenu_1302223074(){
    cout << "===== MENU =====" << endl;
    cout << "1. Input data" << endl;
    cout << "2. Output semua data" << endl;
    cout << "3. presentase vokal dan konsonan" << endl;
    cout << "4. Output data terakhir ke-K" << endl;
    cout << "0. Keluar" << endl;
    cout << "Pilihan menu: ";

    int input = 0;
    cin >> input;
    return input;
}
