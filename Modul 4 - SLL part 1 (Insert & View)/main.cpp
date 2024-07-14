#include <iostream>
#include "list.h"

using namespace std;

int main()
{
    list L;
    infotype x;
    address pointer;
    createList_1302223074(L);
    cout << "masukkan NIM perdigit"<< endl;
    for (int i=1;i<=10;i++){
        cout << "digit " << i << " : ";
        cin >> x;
    pointer = allocate_1302223074(x);
    insertLast_1302223074(L, pointer);
    }
    printInfo_1302223074(L);

}
