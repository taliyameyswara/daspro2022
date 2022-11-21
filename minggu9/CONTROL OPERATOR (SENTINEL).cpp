#include <iostream>

using namespace std;

int main()
{   /**Taliya Meyswara A11.2022.14163**/

    /*Selasa,15 November 2022
    While Looping - Type of loop
    1. Loop
    2. Control operator (sentinel)
    */

    /**
    Program Cetak Hello World
    {Program cetak hello world sebanyak n kali}
    KAMUS
    i,n (interger)
    i=1;
    ALGORITMA
    while i <= n do
    output ("Hello World")
    --------------------------------------------
    cout << "Program Cetak Hello World" << endl;
    int i,n;
    i = 1;
    cout << "input banyak data = " ; cin >> n;
    while(i<=n){
        cout << i << ". Hello World" << endl;
        i++;
    }
    */

    /**CONTROL OPERATOR (SENTINEL)
    Program Cetak Angka Interger Secara Bebas
    {Program berhenti jika user memasukkan angka 2}
    KAMUS
    i,n (interger)
    i=2;
    n=0;
    ALGORITMA
    while i!=n do
    output ("input angka [tekan angka 2 untuk berhenti] = ")
    input (n)
    --------------------------------
    int n,i;
    i = 2;
    n = 0;
    while(i!=n){
        cout << "input angka [tekan angka 2 untuk berhenti] = " ;
        cin >> n;
    }
    */

    /**
     Program Cetak Angka Interger Secara Bebas
    {Program berhenti jika user memasukkan angka 0 atau -1}
    KAMUS
    n,i,z (interger)
    n=0;
    i=0;
    z=-1;
    ALGORITMA
    output ("input angka [tekan angka 0/-1 untuk berhenti] = ")
    input (n)
    while i!=n && z!=n do
    output ("input angka [tekan angka 0/-1 untuk berhenti] = ")
    input (n)
    ------------------------------------------------------------
    int n,i,z;
    n = 0;
    i = 0;
    z = -1;
    cout << "input angka [tekan angka 0/-1 untuk berhenti] = " ;
    cin >> n;
    while(i!=n && z!=n){
    cout << "input angka [tekan angka 0/-1 untuk berhenti] = " ;
    cin >> n;
    }
    */

    return 0;
}
