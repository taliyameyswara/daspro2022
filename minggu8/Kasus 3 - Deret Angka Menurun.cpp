#include <iostream>

using namespace std;

int main()
{
    /** Kasus 3
    Program - Deret Angka Menurun
        { program menampilkan deret 10 angka bilangan integer dari urutan terbesar
ke terkecil.}
    Kamus
        i(interger)
    Algoritma
        for i = 10;
        to i (i>=0)
        do :
        output (i)
        i <- i+1
    */
    /*int i;
    for (i=10; i>=0; i--){
        cout << i <<" ";
    }

    int i;
    for (i=9; i>=0; i--){
        cout << i <<" ";
    }*/

    //Modifikasi
     /** Kasus 3a - Notasi
    Program – Modifikasi Deret Angka Menurun
        {Program menghasilkan deret dimulai dari b dan diakhiri oleh a
        (bilangan b lebih besar dari a)}
    Kamus
        a,b (interger)
    Algoritma
        input (a)
        input (b)
        for i=b
        to i (i>=a)
        do :
        output (a)
        i <- i+1
    */
    int i,a,b;
    cout << "Input a : " ; cin >> a;
    cout << "Input b : " ; cin >> b;
      for (i=b; i>=a; i-- ){
        cout << i << " " ;
    }
    return 0;
}
