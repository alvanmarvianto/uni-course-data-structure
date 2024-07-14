#ifndef KERUCUT_H_INCLUDED
#define KERUCUT_H_INCLUDED

using namespace std;

struct kerucut{
        double jari;
        double tinggi;
        double luas_perm;
        double volume;
};

void beri_data(kerucut &krct, double jari, double tinggi);
double hitung_luas_permukaan(kerucut &krct);
double hitung_volume(kerucut &krct);
void output_hasil(kerucut &krct);

#endif // KERUCUT_H_INCLUDED
