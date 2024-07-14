#include "flight.h"

int main()
{
    ListJadwal L;
    int n;
    adr_jadwalP P,Q;
    infotype X;

    createListJadwal_1302223074(L);
    cout << "Masukkan jumlah data yang mau diinput: ";
    cin >> n;
    for (int i=1;i<=n;i++){
        cout << "Data ke-" << i <<endl;
        cout << "Input kode: ";
        cin >> X.kode;
        cout << "Input jenis: ";
        cin >> X.jenis;
        cout << "Input Tanggal: ";
        cin >> X.tanggal;
        cout << "Input Waktu: ";
        cin >> X.waktu;
        cout << "Input Asal: ";
        cin >> X.asal;
        cout << "Input Tujuan: ";
        cin >> X.tujuan;
        cout << "Input Kapasitas: ";
        cin >> X.kapasitas;
        cout << endl;
        P = createElemenJadwal_1302223074(X);
        insertLastJ_1302223074(L,P);
    }
    cout << "List Awal: " << endl;
    showJadwal_1302223074(L);

    deleteFirstJ_1302223074(L,Q);
    cout << "List setelah delete: " << endl;
    showJadwal_1302223074(L);


    searchFound_1302223074(L);
}
