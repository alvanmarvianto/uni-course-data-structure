#include "flight.h"

void createListJadwal_1302223074(ListJadwal &L){
    first(L) = NULL;
}

adr_jadwalP createElemenJadwal_1302223074(infotype X){
    adr_jadwalP P = new elemenJadwal;
    info(P) = X;
    next(P) = NULL;
    return P;
}

void insertLastJ_1302223074(ListJadwal &L, adr_jadwalP P){
    if (first(L) == NULL){
        first(L) = P;
        next(P) = NULL;
    } else {
        adr_jadwalP Q = first(L);
        while (next(Q)!=NULL){
            Q = next(Q);
        }
        next(Q) = P;
    }
}

void showJadwal_1302223074(ListJadwal L){
    if (first(L) == NULL){
        cout << "Data Kosong!" << endl;
    } else {
        adr_jadwalP P = first(L);
        while (P!=NULL){
            cout << "Kode: " << info(P).kode << ", Jenis: " << info(P).jenis << ", Tanggal: " << info(P).tanggal << ", Waktu: " << info(P).waktu;
            cout << ", Asal: " << info(P).asal << ", Tujuan: " << info(P).tujuan << ", Kapasitas: " << info(P).kapasitas << endl;
            P = next(P);
        }
        cout << endl;
    }
}

void deleteFirstJ_1302223074(ListJadwal &L, adr_jadwalP &P){
    if (first(L)==NULL){
        cout << "Data Kosong";
    } else {
        P = first(L);
        first(L) = next(P);
        next(P) = NULL;
    }
}

adr_jadwalP searchJ_1302223074(ListJadwal L, string dari, string ke, string tanggal){
        adr_jadwalP P = first(L);
        while (P != NULL){
            if (info(P).asal == dari && info(P).tujuan == ke && info(P).tanggal == tanggal){
                return P;
            }
            P = next(P);
        }
    return NULL;
    }

void searchFound_1302223074(ListJadwal L){
    adr_jadwalP P = NULL;
    string dari, ke, tanggal;
    cout << "Search penerbangan\nInput asal keberangkatan: ";
    cin >> dari;
    cout << "Input tujuan penerbangan: ";
    cin >> ke;
    cout << "Input tanggal keberangkatan: ";
    cin >> tanggal;
    P = searchJ_1302223074(L,dari,ke,tanggal);
    if (P == NULL){
        cout << "Data tidak ditemukan";
    } else {
        cout << "Data ditemukan" << endl;
        cout << "Kode: " << info(P).kode << ", Jenis: " << info(P).jenis << ", Tanggal: " << info(P).tanggal << ", Waktu: " << info(P).waktu;
        cout << ", Asal: " << info(P).asal << ", Tujuan: " << info(P).tujuan << ", Kapasitas: " << info(P).kapasitas << endl;
    }
}
