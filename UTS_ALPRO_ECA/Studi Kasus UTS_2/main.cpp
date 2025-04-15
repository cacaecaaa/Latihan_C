#include <iostream>
using namespace std;

int main() {
    int awal, akhir, jumlah = 0, count = 0;

    cout << "Input Nilai Awal: ";
    cin >> awal;
    cout << "Input Nilai Akhir: ";
    cin >> akhir;

    cout << "Output: ";
    for (int i = awal; i <= akhir; i++) {
        if (i % 5 == 0 && i % 2 != 0) {
            cout << i << " ";
            jumlah += i;
            count++;
        }
    }

    if (count > 0) {
        float rata = (float)jumlah / count;
        cout << "\nNilai rata-ratanya adalah = " << rata;
    } else {
        cout << "\nTidak ada nilai yang memenuhi syarat.";
    }

    return 0;
}
