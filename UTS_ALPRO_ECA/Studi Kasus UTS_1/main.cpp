#include <iostream>
using namespace std;

int main() {
    string nama;
    int umur;
    float tinggi;

    cout << "Input nama: ";
    cin >> nama;
    cout << "Input umur: ";
    cin >> umur;
    cout << "Input tinggi badan (cm): ";
    cin >> tinggi;

    cout << "Nama: " << nama << endl;

    if (umur >= 17 && umur <= 30) {
        if (tinggi > 165)
            cout << "DITERIMA SEBAGAI STAFF ADMINISTRASI";
        else
            cout << "TIDAK DITERIMA SEBAGAI PEGAWAI";
    } else if (umur > 30 && umur < 40) {
        if (tinggi > 170)
            cout << "DITERIMA SEBAGAI KEPALA ADMIN";
        else if (tinggi >= 160 && tinggi <= 170)
            cout << "DITERIMA SEBAGAI STAFF ADMIN";
        else
            cout << "TIDAK DITERIMA SEBAGAI PEGAWAI";
    } else {
        cout << "TIDAK DITERIMA SEBAGAI PEGAWAI";
    }

    return 0;
}
