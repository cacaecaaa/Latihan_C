#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Fungsi untuk mencari barang berdasarkan kode
int cariBarang(string kodeBarang[], string cariKode, int jumlahBarang) {
    for (int i = 0; i < jumlahBarang; i++) {
        if (kodeBarang[i] == cariKode) {
            return i; // ketemu, kembalikan index
        }
    }
    return -1; // tidak ketemu
}

// Fungsi untuk mencari kasir (algoritma pencarian)
int cariKasir(string username[], string cariUser, int jumlahKasir) {
    for (int i = 0; i < jumlahKasir; i++) {
        if (username[i] == cariUser) {
            return i; // ketemu, kembalikan index
        }
    }
    return -1; // tidak ketemu
}

// Prosedur untuk menampilkan daftar barang
void tampilkanDaftar(string kodeBarang[], string namaBarang[], int hargaBarang[], int jumlahBarang) {
    cout << "=== Daftar Barang Toko Pakaian ===" << endl;
    for (int i = 0; i < jumlahBarang; i++) {
        cout << i + 1 << ". Kode: " << kodeBarang[i]
             << ", Nama: " << setw(12) << left << namaBarang[i]
             << ", Harga: Rp." << hargaBarang[i] << endl;
    }
    cout << "===================================" << endl;
}

int main() {
    // Data kasir (user login)
    const int jumlahKasir = 3;
    string username[jumlahKasir] = {"eca", "fais", "nisa"};
    string password[jumlahKasir] = {"123", "123", "123"};

    // Proses login
    string inputUser, inputPass;
    bool loginSukses = false;
    int percobaan = 0;

    while (!loginSukses && percobaan < 3) {
        cout << "=== LOGIN KASIR ===" << endl;
        cout << "Username: ";
        cin >> inputUser;
        cout << "Password: ";
        cin >> inputPass;

        int indexUser = cariKasir(username, inputUser, jumlahKasir);

        // If dan if bersarang untuk verifikasi login
        if (indexUser != -1) {
            if (password[indexUser] == inputPass) {
                cout << "Login berhasil! Selamat datang, " << inputUser << "." << endl;
                loginSukses = true;
            } else {
                cout << "Password salah!" << endl;
            }
        } else {
            cout << "Username tidak ditemukan!" << endl;
        }

        percobaan++;
        if (!loginSukses && percobaan < 3) {
            cout << "Silakan coba lagi.\n" << endl;
        }
    }

    if (!loginSukses) {
        cout << "Anda telah gagal login 3 kali. Program berhenti." << endl;
        return 0;
    }

    // Data barang
    const int jumlahBarang = 10;
    string kodeBarang[jumlahBarang] = {"A01", "A02", "A03", "A04", "A05", "A06", "A07", "A08", "A09", "A10"};
    string namaBarang[jumlahBarang] = {"Kaos", "Celana", "Jaket", "Kemeja", "Topi", "Hoodie", "Rok", "Dress", "Sweater", "Scarf"};
    int hargaBarang[jumlahBarang] = {50000, 100000, 150000, 120000, 40000, 130000, 80000, 160000, 110000, 30000};

    // Array untuk menyimpan barang yang dibeli
    string beliKode[100];
    int beliJumlah[100];
    int indexBeli = 0;

    int jumlahBeli;
    int totalHarga = 0;
    char lagi;

    do {
        tampilkanDaftar(kodeBarang, namaBarang, hargaBarang, jumlahBarang);

        cout << "Masukkan kode barang yang ingin dibeli: ";
        cin >> beliKode[indexBeli];

        int index = cariBarang(kodeBarang, beliKode[indexBeli], jumlahBarang);

        if (index != -1) { // Barang ditemukan
            cout << "Anda membeli " << namaBarang[index] << endl;
            cout << "Berapa banyak yang ingin dibeli? ";
            cin >> jumlahBeli;

            // If bersarang: jika jumlah beli lebih dari 10, diskon 10%
            if (jumlahBeli > 0) {
                int harga = hargaBarang[index];
                int subTotal = harga * jumlahBeli;

                if (jumlahBeli > 10) {
                    cout << "Anda mendapat diskon 10%!" << endl;
                    subTotal -= subTotal * 0.1;
                }

                totalHarga += subTotal;
                beliJumlah[indexBeli] = jumlahBeli;

                cout << "Subtotal belanjaan Anda: Rp." << subTotal << endl;
                indexBeli++;

            } else {
                cout << "Jumlah beli tidak valid." << endl;
            }
        } else {
            cout << "Kode barang tidak ditemukan!" << endl;
        }

        cout << "Ingin belanja lagi? (y/n): ";
        cin >> lagi;

    } while (lagi == 'y' || lagi == 'Y');

    // Proses pembayaran
    int jumlahBayar;
    cout << "\nTotal harga belanja: Rp." << totalHarga << endl;

    do {
        cout << "Jumlah bayar: Rp.";
        cin >> jumlahBayar;

        if (jumlahBayar < totalHarga) {
            cout << "Uang anda kurang. Mohon lakukan ulang pembayaran." << endl;
        }

    } while (jumlahBayar < totalHarga);

    // Menampilkan struk pembelian (perulangan bersarang)
    cout << "\n----------------------------------------------------------" << endl;
    cout << "####----     Struk Toko Pakaian ILKOOM (Kasir: " << inputUser << ")     ----####" << endl;
    cout << "----------------------------------------------------------" << endl;
    cout << "No   Barang        Jumlah    Harga Satuan     Sub Total" << endl;
    int grandTotal = 0;
    for (int i = 0; i < indexBeli; i++) {
        int idx = cariBarang(kodeBarang, beliKode[i], jumlahBarang);
        int subTotal = beliJumlah[i] * hargaBarang[idx];
        if (beliJumlah[i] > 10) {
            subTotal -= subTotal * 0.1; // diskon
        }
        cout << setw(1) << i + 1 << " ";
        cout << left << setw(14) << namaBarang[idx];
        cout << right << setw(5) << beliJumlah[i];
        cout << setw(15) << hargaBarang[idx];
        cout << setw(15) << subTotal;
        cout << endl;
        grandTotal += subTotal;

    }
    cout << "----------------------------------------------------------" << endl;
    cout << "Total Belanja: Rp." << grandTotal << endl;
    cout << "Uang Dibayar: Rp." << jumlahBayar << endl;
    cout << "Kembalian: Rp." << (jumlahBayar - grandTotal) << endl;
    cout << "----------------------------------------------------------" << endl;

    cout << "Terima kasih telah berbelanja di Toko Pakaian kami!" << endl;

    return 0;
}
