#include <iostream>

using namespace std;

int main()
{
    // Deklarasi variabel untuk nilai tugas, UTS, dan UAS
    float nilaiTugas, nilaiUTS, nilaiUAS, rataRata;

    // Meminta input nilai tugas
    cout << "Masukkan nilai tugas (0-100): ";
    cin >> nilaiTugas;

    // Meminta input nilai UTS
    cout << "Masukkan nilai UTS (0-100): ";
    cin >> nilaiUTS;

    // Meminta input nilai UAS
    cout << "Masukkan nilai UAS (0-100): ";
    cin >> nilaiUAS;

    // Menghitung rata-rata dengan bobot
    rataRata = (nilaiTugas * 0.40) + (nilaiUTS * 0.30) + (nilaiUAS * 0.30);

    // Menampilkan hasil nilai rata-rata
    cout << "Nilai rata-rata ujian Anda adalah: " << rataRata << endl;

    return 0;
}
