#include "DLL.h"
bool isEmpty_1302223074(list L){

    if (first(L)==NULL && last(L)==NULL){
        return true;
    }
    return false;
}

void createList_1302223074(list &L){
    first(L) = NULL;
    last(L) = NULL;
}

infotype createElement_1302223074(){
    infotype X;
    cout << "Masukkan nama lagu: ";
    cin >> X.judul;
    cout << "Masukkan nama band: ";
    cin >> X.band;
    return X;
}

address createNewElmt_1302223074(infotype X){
    address P = new elmlist;
    info(P) = X;
    next(P) = NULL;
    prev(P) = NULL;
    return P;
}

void insertFirst_1302223074(list &L, address P){
    if (isEmpty_1302223074(L)){
        first(L) = P;
        last(L) = P;
    } else {
        next(P) = first(L);
        prev(first(L)) = P;
        first(L);
    }
}

void insertAfter_1302223074(list &L,address P, address prec){
    if (next(prec) == NULL){
        insertLast_1302223074(L,P);
    } else {
     next(P) = next(prec);
     prev(P) = prec;
     next(prec) = P;
     prev(next(prec)) = P;
    }

}

void insertLast_1302223074(list &L, address P){
    if (isEmpty_1302223074(L)){
        first(L) = P;
        last(L) = P;
    } else {
        next(last(L)) = P;
        prev(P) = last(L);
        last(L) = P;
    }
}

void deleteFirst_1302223074(list &L, address &P){
    if (first(L)==last(L)){
        first(L) = NULL;
        last(L) = NULL;
    } else {
        P = first(L);
        first(L) = next(P);
        prev(first(L)) = NULL;
        next(P) = NULL;
    }
}

void deleteAfter_1302223074(list &L,address &P, address prec){
    P = next(prec);
    if (next(prec)== last(L)){
        deleteLast_1302223074(L,P);
    } else {
        next(prec) = next(P);
        prev(next(P)) = prec;
        next(P) = NULL;
        prev(P) = NULL;

    }
}

void deleteLast_1302223074(list &L, address &P){
    if (first(L)==last(L)){
        first(L) = NULL;
        last(L) = NULL;
    } else {
        P = last(L);
        last(L) = prev(P);
        next(prev(P)) = NULL;
        prev(P) = NULL;
    }
}

void concat_1302223074(list L1, list L2, list &L3){
    address P = first(L1);
    address data;
    infotype X;
    while (P!=NULL){
        X = info(P);
        data = createNewElmt_1302223074(X);
        insertLast_1302223074(L3, data);
        P = next(P);
    }
    P = first(L2);
    while (P!=NULL){
        X = info(P);
        data = createNewElmt_1302223074(X);
        insertLast_1302223074(L3, data);
        P = next(P);
    }
}

address findLagu_1302223074(string judul, list L){
    if (isEmpty_1302223074(L)){
        return NULL;
    } else {
        address P = first(L);
        while (P != NULL){
            if (info(P).judul == judul){
                return P;
            }
            P = next(P);
        }
    }
    return NULL;
}

void removeLagu_1302223074(string judul, list &L){
    address P = findLagu_1302223074(judul, L);
    address Q;
    if (P==NULL){
        cout << "Lagu tidak ditemukan :("<<endl;
    } else {
        if (P==first(L)){
            deleteFirst_1302223074(L,P);
        } else {
            deleteAfter_1302223074(L,Q,prev(P));
        }
        cout << "isi data yang dihapus memiliki judul lagu: " << info(P).judul << ", nama band: " << info(P).band <<endl;
        cout << "Berikut isi playlist:" << endl;
        showList_1302223074(L);
    }
}

void showList_1302223074(list L){
    if (isEmpty_1302223074(L)){
        cout << "List kosong" << endl;
    } else {
        address P = first(L);
        int i = 1;
        while (P!=NULL){
            cout << i << ". Judul lagu: " << info(P).judul << ", nama band: " << info(P).band << endl;
            i++;
            P=next(P);
        }
    }
}

int menu_1302223074(){
    int no;
    cout << "\nMenu" << endl;
    cout << "1. Masukkan data playlist 1" << endl;
    cout << "2. Masukkan data playlist 2" << endl;
    cout << "3. Hapus data pertama di playlist 1" << endl;
    cout << "4. Hapus data terakhir di playlist 2" << endl;
    cout << "5. Hapus data berdasarkan lagu di playlist 1 doang" << endl;
    cout << "6. Gabungkan playlist 1 dan playlist 2" << endl;
    cout << "7. Tampilkan semua data" << endl;
    cout << "0. Keluar" << endl;
    cout << "Masukkan angka: ";
    cin >> no;
    return no;
}
