#include <iostream>
#include "DLL.h"

using namespace std;

int main()
{
    list playlist1, playlist2, playlist3;
    int noMenu, n;
    string judul;
    address data, P;
    infotype X;
    createList_1302223074(playlist1);
    createList_1302223074(playlist2);
    createList_1302223074(playlist3);
    noMenu = menu_1302223074();
    while (noMenu!=0){
        switch (noMenu){
            case 1: {
                cout << "Masukkan jumlah data yang akan di masukkan: ";
                cin >> n;
                cout << "\nData " << 1 << ": " << endl;
                X = createElement_1302223074();
                data = createNewElmt_1302223074(X);
                insertFirst_1302223074(playlist1, data);
                for (int i = 2; i<=n; i++){
                    cout << "\nData " << i << ": " << endl;
                    X = createElement_1302223074();
                    data = createNewElmt_1302223074(X);
                    insertLast_1302223074(playlist1, data);
                }
                cout << "Data berhasil dimasukkan! isi berikut playlist 1:" << endl;
                showList_1302223074(playlist1);
                break;
            }
            case 2: {
                cout << "Masukkan jumlah data yang akan di masukkan: ";
                cin >> n;
                cout << "\nData " << 1 << ": " << endl;
                X = createElement_1302223074();
                data = createNewElmt_1302223074(X);
                insertFirst_1302223074(playlist2, data);
                for (int i = 2; i<=n; i++){
                    cout << "\nData " << i << ": " << endl;
                    X = createElement_1302223074();
                    data = createNewElmt_1302223074(X);
                    insertLast_1302223074(playlist2, data);
                }
                cout << "Data berhasil dimasukkan! isi berikut playlist 2:" << endl;
                showList_1302223074(playlist2);
                break;
            }
            case 3: {
                deleteFirst_1302223074(playlist1, P);
                cout << "isi data yang dihapus memiliki judul lagu: " << info(P).judul << ", nama band: " << info(P).band <<endl;
                cout << "Berikut isi playlist 1:" << endl;
                showList_1302223074(playlist1);
                break;
            }
            case 4: {
                deleteLast_1302223074(playlist2, P);
                cout << "isi data yang dihapus memiliki judul lagu: " << info(P).judul << ", nama band: " << info(P).band <<endl;
                cout << "Berikut isi playlist 2:" << endl;
                showList_1302223074(playlist2);
                break;
            }
            case 5:{
                cout << "Masukkan judul lagu yang akan dihapus: ";
                cin >> judul;
                removeLagu_1302223074(judul, playlist1);
                break;
            }
            case 6: {
                concat_1302223074(playlist1,playlist2,playlist3);
                cout << "Data berhasil digabungkan! berikut isi playlist: " << endl;
                showList_1302223074(playlist3);
                break;
            }
            case 7:{
                cout << "Playlist 1: "<<endl;
                showList_1302223074(playlist1);
                cout << "Playlist 2: "<<endl;
                showList_1302223074(playlist2);
                cout << "Playlist gabung: "<<endl;
                showList_1302223074(playlist3);
                break;
            }
        }
        noMenu = menu_1302223074();
    }
}
