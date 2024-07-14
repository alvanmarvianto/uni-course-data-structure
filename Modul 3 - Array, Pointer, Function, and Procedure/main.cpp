#include <iostream>

#include "kerucut.h"
#include "kerucut.cpp"

using namespace std;

int main()
{
    kerucut alvan;
    beri_data(alvan, 5.0, 12.0);
    hitung_luas_permukaan(alvan);
    hitung_volume(alvan);
    output_hasil(alvan);


    return 0;
}
