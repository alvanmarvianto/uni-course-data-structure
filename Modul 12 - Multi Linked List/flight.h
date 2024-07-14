#ifndef FLIGHT_H_INCLUDED
#define FLIGHT_H_INCLUDED

#include <iostream>
using namespace std;

#define next(P) P->next
#define info(P) P->info
#define first(L) L.first

struct jadwalPenerbangan{
    string kode,jenis,tanggal,waktu,asal,tujuan;
    int kapasitas;
};

typedef struct elemenJadwal *adr_jadwalP;
typedef jadwalPenerbangan infotype;
struct elemenJadwal{
    infotype info;
    adr_jadwalP next;
};
struct ListJadwal{
    adr_jadwalP first;
};

void createListJadwal_1302223074(ListJadwal &L);
adr_jadwalP createElemenJadwal_1302223074(infotype X);
void insertLastJ_1302223074(ListJadwal &L, adr_jadwalP P);
void showJadwal_1302223074(ListJadwal L);
void deleteFirstJ_1302223074(ListJadwal &L, adr_jadwalP &P);
adr_jadwalP searchJ_1302223074(ListJadwal L, string dari, string ke, string tanggal);
void searchFound_1302223074(ListJadwal L);

#endif // FLIGHT_H_INCLUDED
