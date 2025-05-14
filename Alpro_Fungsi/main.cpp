#include <iostream>

using namespace std;
int jumlah (int x,int y);
int perkalian (int x, int y);

int main()
{
    int a,b,hasil,hasilkali;
    cout<<"Inputkan nilai 1 = ";cin>>a;
    cout<<"Inputkan nilai 2 = ";cin>>b;
    hasil=jumlah(a,b);
    hasilkali=perkalian(a,b);
    cout<<"Hasil Penjumlahan = "<<hasil<<endl;
    cout<<"Hasil Perkalian = "<<hasilkali;
    return 0;
}

int jumlah(int x, int y)
{
    return (x+y);
}

int perkalian(int x, int y)
{
    return (x*y);
}
//INI CONTOH PENGGUNAAN FUNGSI//
//FUNGSI ADA RETURN(NILAI BALIK)//
