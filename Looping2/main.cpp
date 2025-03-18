#include <iostream>

using namespace std;

int main()
{
    char menu = 'y';
    int pilih;

    while (menu == 'y'){
        cout << "Pilihan Menu : "<<endl;
        cout << "1. Sushi"<<endl;
        cout << "2. Bento"<<endl;
        cout << "3. Ramen"<<endl;
        cout << "Inputkan Pilihan Anda ";
        cin >> pilih;

        if (pilih == 1){
            cout << "Anda Memilih Sushi";
        }
        else if (pilih == 2){
            cout << "Anda Memilih Bento";
        }
        else if (pilih == 3) {
            cout << "Anda Memilih Ramen";
        }
        else {
        }

        cout << endl << "Apakah Ingin Mengulang = ";
        cin >> menu;
    }
}
