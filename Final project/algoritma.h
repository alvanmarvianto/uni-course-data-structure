#ifndef ALGORITMA_H_INCLUDED
#define ALGORITMA_H_INCLUDED

#include "listDiet.h"

using namespace std;
#include <iostream>

int menu();
infotypeDiet inputDiet();
infotypeKonsumsi inputKonsumsi();
void countComposition(addressDiet D);
void checkConnectionKonsumsi (ListDiet D, addressKonsumsi K);

#endif // ALGORITMA_H_INCLUDED
