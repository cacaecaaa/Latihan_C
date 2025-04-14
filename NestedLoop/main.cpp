#include <iostream>

using namespace std;

int main()
{
    int baris = 8;

    for (int i = 1; i <= baris; i++) {
        for (int spasi = 1; spasi <= baris - i; spasi++){
            cout<<" ";
        }

        for (int bintang = 1; bintang <= (2 * i - 1); bintang++){
            cout<<"*";
        }
          cout<<"\n";
    }
    return 0;
}
