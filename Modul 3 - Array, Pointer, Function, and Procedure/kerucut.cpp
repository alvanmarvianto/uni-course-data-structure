#include "kerucut.h"
#include <iostream>
#include <cmath>

using namespace std;

void beri_data(kerucut &krct, double jari, double tinggi){
    krct.jari = jari;
    krct.tinggi = tinggi;
}

double hitung_luas_permukaan(kerucut &krct){
    double s = sqrt(krct.jari * krct.jari + krct.tinggi * krct.tinggi);
    krct.luas_perm = 3.14 * krct.jari * (krct.jari + s);
    return krct.luas_perm;
}

double hitung_volume(kerucut &krct){
    krct.volume = (1.0 / 3.0) * 3.14 * krct.jari * krct.jari * krct.tinggi;
    return krct.volume;
}

void output_hasil(kerucut &krct){
    cout << "Jari-jari: " << krct.jari << endl;
    cout << "Tinggi: " << krct.tinggi << endl;
    cout << "Luas Permukaan: " << krct.luas_perm << endl;
    cout << "Volume: " << krct.volume << endl;
}
