#include <iostream>

using namespace std;

int main()
{
    int i,n,angka,jwb;
    char ulang;

    do{
        n = 3;
        i = 1;
        jwb = 3;
        do{
            while(i<=n){
            cout << "input angka = " ;
            cin >> angka;
            i++;
            if(angka!=jwb){
            cout << "tebakan anda salah, tebak lagi" << endl;
            }
            if (angka==jwb){
            cout << "Selamat Anda Benar, Tebakan 3, Ambil Rewardmu." << endl;
            break;
            }
            if (i>n){
            cout << "Maaf Anda gagal" << endl;
            }
            }
        }
        while(i<n);{
             cout << "ulangi permainan? (y/t) = " ; cin >> ulang;
        }
    }
    while(ulang == 'y');
    cout << "done" << endl;
    return 0;
}
