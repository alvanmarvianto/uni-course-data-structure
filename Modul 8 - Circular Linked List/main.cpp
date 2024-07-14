#include <iostream>
#include "doubleCircular.h"

using namespace std;

int main()
{
    List L;
    createList(L);

    insertLast(L,alokasi(5));
    insertLast(L,alokasi(15));
    insertLast(L,alokasi(25));
    insertLast(L,alokasi(35));
    insertLast(L,alokasi(45));
    insertLast(L,alokasi(55));
    insertLast(L,alokasi(65));
    insertLast(L,alokasi(75));
    insertLast(L,alokasi(85));
    printInfo(L);

    deleteByValue(L,5);
    deleteByValue(L,100);
    deleteByValue(L,45);
    deleteByValue(L,85);
    printInfo(L);

    return 0;
}
