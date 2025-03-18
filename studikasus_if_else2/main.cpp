#include <iostream>

using namespace std;

int main()
{
   float harga;
   int pilih, jumlah_beli;

   cout << "=== Program Pembelian Buku ===" << endl;
   cout << "" <<endl;
   cout << "1. Buku = 5000" << endl;
   cout << "2. Alat Tulis = 1.500" << endl;
   cout << "3. Cover Buku = 500" << endl;
   cout << "Ingin membeli apa? : ";
   cin >> pilih;
   cout << "" << endl;
   cout << "==================================================" << endl;


   if (pilih == 1) {
        cout << "Anda Beli Buku" << endl;
        cout <<"Mau Berapa Buku : ";
        cin >> jumlah_beli;
        harga = jumlah_beli*5000;

   } else if (pilih == 2) {
        cout << "Anda Beli Alat Tulis" << endl;
        cout <<"Mau Berapa Alat Tulis : ";
        cin >> jumlah_beli;
        harga = jumlah_beli*1500;

   } else if (pilih == 3) {
        cout << "Anda Beli Cover Buku" << endl;
        cout <<"Mau Berapa Cover Buku : ";
        cin >> jumlah_beli;
        harga = jumlah_beli*500;
   } else {
        cout << "TOLONG DIBACA KETERANGANNYA!";
   }

   cout << "" << endl;
   cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
   cout << "Total Belanja Anda = " <<harga;

 return 0;
}

