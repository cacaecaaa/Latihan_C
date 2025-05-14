#include <iostream>

using namespace std;


int jumlah(int x, int y);
int kali(int x, int y);
void golongan (int x);

int main() {
    int a, b, hasilJumlah, hasilKali;

    cout << "Inputkan nilai 1 = ";
    cin >> a;
    cout << "Inputkan nilai 2 = ";
    cin >> b;

    hasilJumlah = jumlah(a, b);
    hasilKali = kali(a, b);

    cout << "Hasil Penjumlahan = " << hasilJumlah << endl;
    cout << "Hasil Perkalian   = " << hasilKali << endl;

    cout<<"Golongan a bilangan = ";golongan(a);cout<<endl;
    cout<<"Golongan b bilangan = ";golongan(b);
    return 0;
}


int jumlah(int x, int y) {
    return (x + y);
}

int kali(int x, int y) {
    return (x * y);
}
void golongan(int x)
{
    if (x>0)
    {
        cout<<"positif jir";
    }
    else if (x<0)
    {
        cout<<"negatif";
    }
    else{
        cout<<"netral";
    }
}
