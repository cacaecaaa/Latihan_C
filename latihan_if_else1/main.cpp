#include <iostream>
using namespace std;

int main(){

    int nilai;
    string grade;

    cout << "=== Program Grade Nilai ===" << endl;
    cout << "Inputkan nilai akhir: ";
    cin >> nilai;

    // menggunakan percabangan if/else/if
    if (nilai >= 85 && nilai <= 100) {
        grade = "A";
    } else if (nilai >= 70 && nilai <= 84.99) {
        grade = "B";
    } else if (nilai >= 60 && nilai <= 69.99) {
        grade = "C";
    } else if (nilai >= 0 && nilai <= 59.99) {
        grade = "TIDAK LULUS";
    } else {
        grade = "TIDAK VALID BJIR";
    }

    cout << "Grade anda: " << grade << endl;

    return 0;
}
