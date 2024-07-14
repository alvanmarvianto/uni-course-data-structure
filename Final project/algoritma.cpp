#include "algoritma.h"

int menu(){
    cout << "===========MENU============" << endl;
    cout << "1. Insert diet" << endl;               // Masukkin data kalo nama sama ulang (pake insertLast)
    cout << "2. Print all diet" << endl;            // pake printList
    cout << "3. Insert food" << endl;               // sm kyk no 1
    cout << "4. Print food" << endl;                // sm kyk no 2
    cout << "5. Connect "<< endl;                   // cari diet sm mkn kl ktm cnnct
    cout << "6. Check connection" << endl;          // extend menu, mau cek diet atau mkn trs (pake findElm) abis tu print
    cout << "7. Disconnect" << endl;                // findElm
    cout << "8. Print all" << endl;                 // printInfo diet diet trus printInfo relasi
    cout << "9. Delete diet" << endl;              // apus diet -> kalo ada di diet, konfirmasi -> delete relasi dietnya (bisa banyak)
    cout << "10. Delete food" << endl;              // apus diet beserta relasinya (bukan food)
    cout << "11. Hitung total komposisi" << endl;   //findElm diet trus itung total stiap tipe data konsumsi
    cout << "0. Exit" << endl;
    cout << "Masukkan nomor menu : ";
    int input;
    cin >> input;
    cout << endl;
    return input;
}

infotypeDiet inputDiet(){
    infotypeDiet x;
    cout << "Nama diet:"; cin >> x.nama;
    cout << "Interval diet:"; cin >> x.interval;
    cout << "Volume diet:"; cin >> x.volume;
    cout << endl;
    return x;
}

infotypeKonsumsi inputKonsumsi(){
    infotypeKonsumsi x;
    cout << "Nama konsumsi:"; cin >> x.nama;
    cout << "Jumlah kalori:"; cin >> x.kalori;
    cout << "Jumlah protein:"; cin >> x.protein;
    cout << "Jumlah lemak:"; cin >> x.lemak;
    cout << "Jumlah karbohidrat:"; cin >> x.karbo;
    cout << endl;
    return x;
}

void countComposition(addressDiet D){
    int kalori = 0;
    int protein = 0;
    int lemak = 0;
    int karbo = 0;
    addressRelasi P = first(child(D));
    while (P!=NULL){
        kalori += info(info(P)).kalori;
        protein += info(info(P)).protein;
        lemak += info(info(P)).lemak;
        karbo += info(info(P)).karbo;
        P = next(P);
    }
    cout << "Jumlah kalori: " << kalori << endl;
    cout << "Jumlah protein: " << protein << endl;
    cout << "Jumlah lemak: " << lemak<< endl;
    cout << "Jumlah karbohidrat: " << karbo << endl;
    cout << endl;
}

void checkConnectionKonsumsi (ListDiet LD, addressKonsumsi K){
    if (K == NULL){
        cout << "Konsumsi tidak ada" << endl;
    } else{
        bool isKosong = true;
        addressDiet D = first(LD);
        addressRelasi R;
        int i =1;
        cout << info(K).nama << " memiliki koneksi dengan:" << endl;
        while (D != NULL){
            R = findElm(child(D), K);
            if (R!= NULL){
                cout << i << ". " <<info(D).nama << endl;
                isKosong = false;
                R = NULL;
                i++;
            }
            D = next(D);
        }
        if (isKosong){
            cout << info(K).nama << " tidak memiliki koneksi\n" << endl;
        } else {
            cout << endl;
        }
    }
}
