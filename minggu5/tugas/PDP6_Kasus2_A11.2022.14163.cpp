#include <iostream>

using namespace std;

int main()
{
     //PDP6. Kasus 2
    //Taliya Meyswara A11.2022.14163
    //04 Oktober 2022

    cout << "Program Menampilkan Bilangan 10" << endl;

    int bil, a, hasil;
    cout << "Input Bilangan = " ; cin >> bil;
    //no 1
    if(bil<10){
        a = -bil+10;
        hasil = bil + a;
        cout << "Bilangan Anda KURANG DARI 10" << endl;
        cout << "Untuk menjadi 10, maka program harus ditambahkan " << a << endl;
        cout << "Silahkan TEKAN angka " << a <<  " = " ; cin >> a;
        cout << "Bilangan Anda = " << hasil << endl;
        cout << "Selamat, program telah menampilkan 10" << endl;
    }

    //no 2
    else if(bil>10){
        a = bil-10;
        hasil = bil + a;
        cout << "Bilangan Anda LEBIH DARI 10" << endl;
        cout << "Untuk menjadi 10, maka program harus dikurangkan " << a << endl;
        cout << "Silahkan TEKAN angka " << a <<  " = " ; cin >> a;
        cout << "Bilangan Anda = " << hasil << endl;
        cout << "Selamat, program telah menampilkan 10" << endl;
    }

    //no 3
    else {
        cout << "Bilangan Anda Sudah 10" << endl;
        cout << "Selamat, program telah menampilkan bilangan 10" << endl;
    }

    return 0;
}
