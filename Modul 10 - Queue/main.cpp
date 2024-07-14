#include "queue.h"
int main()
{
    queue Q, Qgenap, Qganjil;
    address p;
    infotype input;

    createQueue_1302223074(Q);
    createQueue_1302223074(Qgenap);
    createQueue_1302223074(Qganjil);

    for(int i = 1; i <= 10; i++){
        cout << "Antrian ke-"<<i<<" : ";
        cin >> input;
        p = alokasi_1302223074(input);
        enQueue_1302223074(Q, p);
    }
    cout << endl;

    cout << "Kondisi Awal:" << endl;
    printInfo_1302223074(Q);
    cout << endl;

    cout << "Kondisi Akhir:" << endl;
    ganjilGenap_1302223074(Q, Qganjil, Qgenap);


}
