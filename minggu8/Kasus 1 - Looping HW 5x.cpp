#include <iostream>

using namespace std;

int main()
{
    //Selasa 8 Oktober 2022
    //Taliya Meyswara A11.2022.14163
    /*
    Loop: Program yang berulang mengikuti:
    1. Nilai awal (Starting value)
    2. Nilai akhir (Boundary value)
    3. Increment/Decrement Value (Operator)
    to simplify code -> untuk menyederhanakan kode/hasil
    */
    /** Kasus 1 - Notasi
    Program Cetak 5x Hello World
        {menampilkan Hello World sebanyak 5x}
    Kamus
        i (interger)
    Algoritma
        for i = 0
        to 5 (i<5)
        do :
        output ("Hello World")
        i <- i+1
    */

    /**
    int i;
    for(i=0; i<5 ; i++){
        cout << "Hello World" << endl;
    }
    **/

    //Modifikasi
    /** Kasus 1 - Notasi
    Program Cetak 5x Hello World
        {menampilkan Hello World sebanyak 5x}
    Kamus
        i, n (interger)
    Algoritma
        input (n)
        for i = 0
        to 5 (i<n)
        do :
        output ("Hello World")
        i <- i+1
    */

    int i,n;
    /*cout << "Input batas : " ; cin >> n;
    for(i=0; i<n; i++){
        cout << "Hello World" << endl;
    }*/

    //decrement
    cout << "Input batas : " ; cin >> n;
    for(i=n; i>=1; i--){
        cout << i << " .Hello World" << endl;
    }


    return 0;
}
