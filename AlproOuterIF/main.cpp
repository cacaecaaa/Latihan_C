#include <iostream>

using namespace std;

int main()
{
    int umur;
    string status;

    cout<<"=================================="<<endl;
    cout<<"DATA STATUS PEKERJAAN"<<endl;
    cout<<"----------------------------------"<<endl;

    cout<<"Masukkan Umur : ";
    cin>>umur;
    cout<<"Masukkan Status Pekerjaan (Pelajar/Bekerja/Menganggur) : ";
    cin>>status;

    cout<<"----------------------------------"<<endl;
    cout<<"STATUS PEKERJAAN : "<<endl;
    cout<<"----------------------------------"<<endl;

    if(umur < 18){
        if(status == "Pelajar"){
            cout<<"Anda adalah pelajar di bawah umur";
        } else {
            cout<<"Anda belum cukup umur untuk bekerja";
        }

    } else if (umur >= 18 && umur < 60){
        if(status == "Bekerja"){
            cout<<"Anda adalah pekerja usia produktif";
        } else if (status == "Pelajar") {
            cout<<"Anda adalah pelajar dewasa";
        } else {
            cout<<"Anda menganggur di usia produktif";
        }

    } else if (umur >= 60){
        if(status == "Bekerja"){
            cout<<"Anda adalah pekerja senior";
        } else {
            cout<<"Anda pesiunan atau tidak bekerja";
        }

    } else {
        cout <<"Data tidak Valid";
    }
return 0;

}
