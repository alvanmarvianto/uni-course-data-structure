#include <iostream>
#include "sll.h"

using namespace std;

int main()
{
    list daftar;
    int num;
    createList_1302223074(daftar);

    num = selectMenu_1302223074();
    while (num!=0){
        switch(num){
        case 1:{
            int n = 0;
            address pointer;
            infotype huruf;
            cout << "Jumlah data yang akan dimasukkan: ";
            cin >> n;
            for(int i = 1 ; i<=n;i++){
                cout << "Masukkan huruf ke-" <<i<<": ";
                cin >> huruf;
                pointer = allocate_1302223074(huruf);
                insertLast_1302223074(daftar, pointer);;
            }
            cout << endl;
            break;
        }

        case 2: {
            cout << "List semua data adalah:"<< endl;
            showData_1302223074(daftar);
            cout << endl;
            break;
        }

        case 3: {
            double presentase = vocalPrecentage_1302223074(daftar);
            cout << "Rasio huruf vokal adalah: " << presentase<<"%\n"<<endl;
            break;
        }

        case 4:{
            int K;
            cout << "Masukkan isi variabel k: ";
            cin >> K;
            showLastK_1302223074(daftar,K);
            break;
        }
        }
        num = selectMenu_1302223074();
    }
    return 0;
}
