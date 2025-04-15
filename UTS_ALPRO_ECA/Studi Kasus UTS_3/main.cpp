#include <iostream>

using namespace std;

int main()
{
    int awal, akhir;

    cout << "Masukkan Nilai Awal : ";
    cin >> awal;
    cout << "Masukka Nilai Akhir : ";
    cin >> akhir;

    for (int i = awal; i <= akhir; i++) {
        for (int j = 1; j <= akhir; j++) {
            cout << i << "," << j << "\t";
        }
        cout << endl;
    }

    return 0;
}
