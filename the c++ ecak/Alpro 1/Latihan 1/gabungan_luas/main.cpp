#include <iostream>

using namespace std;

int main()
{
    float phi=3.14, luas_segitiga, luas_lingkaran,
    luas_persegi, a, t, jari_jari, sisi, hasil_penjumlahan;

    //meminta input untuk luas segitiga
    cout << "Masukkan nilai Alas = "; cin >>a;
    cout << "Masukkan nilai Tinggi = "; cin >>t;

    //meminta input untuk luas lingkaran
    cout << "Masukkan nilai jari - jari = ";
    cin >>jari_jari;

    //meminta input untuk luas persegi
    cout << "Masukkan nilai sisi = "; cin>>sisi;

    //ngitung
    luas_segitiga = a*t/2;
    luas_lingkaran = phi * jari_jari * jari_jari;
    luas_persegi = sisi * sisi;

    //panggil hasil luas
    cout << "Hasil Luas Segitiga = "<<luas_segitiga<< endl;
    cout << "Hasil Luas Lingkaran = "<<luas_lingkaran<< endl;
    cout << "Hasil Luas Persegi = "<<luas_persegi<< endl;

    //hasil operasi
    hasil_penjumlahan = luas_segitiga + luas_lingkaran - luas_persegi;
    cout << "Hasil Akhir = " << hasil_penjumlahan;

    return 0;

}
