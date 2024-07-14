#include "listKonsumsi.h"
#include "listDiet.h"
#include "listRelasi.h"
#include "algoritma.h"

int main()
{
    ListDiet LD;
    ListKonsumsi LK;
    addressKonsumsi K;
    addressDiet D;
    addressRelasi R;
    infotypeDiet XD;
    infotypeKonsumsi XK;

    int input, n;
    string namaDiet,namaKonsumsi;

    createList(LD);
    createList(LK);

    input = menu();
    while (input!=0){
        switch (input){
            case 1:
                cout << "Masukkan jumlah data yang ingin ditambah: ";
                cin >> n;
                for(int i = 1; i <= n ;i++){
                    cout << "Data ke-" << i << endl;
                    XD = inputDiet();
                    D = alokasi(XD);
                    insertLast(LD, D);
                }
            break;

            case 2:
                D = first(LD);
                if (D==NULL){
                    cout << "Data diet kosong\n" << endl;
                } else {
                    cout << "=========List Diet=========" << endl;
                    while(D!=NULL){
                        printInfo(D);
                        cout << endl;
                        D = next(D);
                    }
                }
            break;

            case 3:
                cout << "Masukkan jumlah data yang ingin ditambah: ";
                cin >> n;
                for(int i = 1; i <= n ;i++){
                    cout << "Data ke-" << i << endl;
                    XK = inputKonsumsi();
                    K = alokasi(XK);
                    insertLast(LK, K);
                }
            break;

            case 4:
                K = first(LK);
                if (K == NULL){
                    cout << "Data konsumsi kosong\n" << endl;
                } else{
                    cout << "=========List Food=========" << endl;
                    while(K!=NULL){
                        printInfo(K);
                        cout << endl;
                        K = next(K);
                    }
                }
            break;

            case 5:
                cout << "Nama diet yang akan di-connect: ";
                cin >> namaDiet;
                cout << "Nama Konsumsi yang akan di-connect: ";
                cin >> namaKonsumsi;
                D = findElm(LD,namaDiet);
                K = findElm(LK, namaKonsumsi);
                if(D == NULL && K == NULL){
                    cout << "Data tidak ditemukan!\n" << endl;
                } else {
                    R = alokasi(K);
                    insertFirst(child(D),R);
                    cout << "Data sudah disambung!\n" << endl;
                }
            break;

            case 6:
                cout << "======Check Connection=====" << endl;
                cout << "1. Diet" <<endl;
                cout << "2. Konsumsi" << endl;
                cout << "Pilih mana yang akan di cek koneksinya: ";
                cin >> input;
                if (input == 1){
                    cout << "Nama diet yang akan dicari: ";
                    cin >> namaDiet;
                    cout << endl;
                    D = findElm(LD, namaDiet);
                    if (D == NULL){
                      cout << "Diet tidak ada!\n" << endl;
                    } else if (first(child(D))!=NULL){
                        cout << info(D).nama << " memiliki koneksi dengan:" << endl;
                        printList(child(D));
                        cout << endl;
                    } else {
                        cout << info(D).nama << " tidak memiliki koneksi\n" << endl;
                    }
                } else if (input == 2){
                    cout << "Nama konsumsi yang akan dicari: ";
                    cin >> namaKonsumsi;
                    cout << endl;
                    K = findElm(LK, namaKonsumsi);
                    checkConnectionKonsumsi(LD, K);
                }
            break;

            case 7:
                cout << "Nama diet yang akan di-disconnect: ";
                cin >> namaDiet;
                cout << "Nama Konsumsi yang akan di-disconnect: ";
                cin >> namaKonsumsi;
                D = findElm(LD,namaDiet);
                K = findElm(LK, namaKonsumsi);
                if(D == NULL && K == NULL){
                    cout << "Data tidak ditemukan!\n" << endl;
                } else {
                    R = findElm(child(D), K);
                    if (R==NULL){
                        cout << "Data tidak saling terkoneksi!\n" << endl;
                    } else {
                        deleteRelasi(child(D),R);
                        dealokasi(R);
                        cout << "Relasi sudah dihapus!\n" << endl;
                    }
                }
            break;

            case 8:
                D = first(LD);
                if (D == NULL){
                    cout << "Data tidak ada!\n" << endl;
                }else {
                    int i = 1;
                    while (D != NULL){
                    cout << "\n=========Diet "<< i <<"=========" << endl;
                    printInfo(D);
                    cout << "\nDengan konsumsi:" << endl;
                    R = first(child(D));
                    while (R!=NULL){
                        printInfo(info(R));
                        cout << endl;
                        R = next(R);
                    }
                    D = next(D);
                    i++;
                    }
                    cout <<endl;
                }
            break;

            case 9:
                cout << "Nama diet yang akan dihapus: ";
                cin >> namaDiet;
                D = findElm(LD, namaDiet);
                if (D == NULL){
                    cout << "Diet tidak ada!\n" << endl;
                } else {
                    deleteAllRelasi(child(D));
                    deleteDiet(LD,D);
                    dealokasi(D);
                    cout << "Diet berhasil dihapus!\n" << endl;
                }
            break;

            case 10:
                cout << "Nama konsumsi yang akan dihapus: ";
                cin >> namaKonsumsi;
                K = findElm(LK, namaKonsumsi);
                if (K == NULL){
                    cout << "Konsumsi tidak ada!\n" << endl;
                } else {
                    D = first(LD);
                    while (D!=NULL){
                        R = findElm(child(D), K);
                        if (R != NULL){
                            deleteRelasi(child(D), R);
                            dealokasi(R);
                        }
                    D=next(D);
                    }
                    deleteKonsumsi(LK, K);
                    dealokasi(K);
                    cout << "Konsumsi berhasil dihapus!\n" << endl;
                }
            break;

            case 11:
                cout << "Nama diet yang akan dicari: ";
                cin >> namaDiet;
                D = findElm(LD, namaDiet);
                if (D == NULL){
                    cout << "Diet tidak ada!\n" << endl;
                } else if (first(child(D)) == NULL) {
                    cout << info(D).nama << " tidak memiliki konsumsi!\n" << endl;
                } else {
                    countComposition(D);
                }
            break;

        }
        input = menu();
    }
}
