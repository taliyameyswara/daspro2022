#include <iostream>

using namespace std;

int main()
{
    /** Kasus 2 - Notasi
    Program Cetak 10 Deret Angka
        {menampilkan deret 10 angka bilangan integer.}
    Kamus
        i (interger)
    Algoritma
        for i = 0
        to 10 (i<10)
        do :
        output (i)
        i <- i+1
    */
    /*
    int i;
    for (i=0; i<10; i++){
        cout << i << " ";
    }
    */

    /*
    int i;
    for (i=1; i<=10; i++){
        cout << i << " ";
    }*/

    //Modifikasi 2a
     /** Kasus 2a - Notasi
    Program – Modifikasi Deret Angka
        {Program menghasilkan deret bilangan dimulai dari a diakhiri oleh N. }
    Kamus
        a,n (interger)
    Algoritma
        input (n)
        input (a)
        for a = a
        to n (i<n)
        do :
        output (i)
        i <- i+1
    */

    int a,n,i;
    cout << "Input n : " ; cin >> n;
    cout << "Input a : " ; cin >> a;
    for (i=a; i<=n; i++ ){
        cout << i << " " ;
    }

    //tampilkan deret n bilangan dimulai dari angka a
    //n=5
    //a=2
    //(2,3,4,5)
    /*for (i=a; i<n+a; i++){
        cout << i << " " ;
    */

    return 0;
}
