#include <iostream>

using namespace std;

int main()
{
     /** Kasus 4 - Notasi
    Program – Modifikasi 2a dan 3a
        {Program modifikasi pada Kasus 2a dan 3a dengan ketentuan increment value
        diinputkan oleh user}
    Kamus
        a,b,i(interger)
    Algoritma
        input (a)
        input (b)
        input (i)
        for i=a
        to i (i<=a)
        do :
        output (a)
        i <- i+i
    */
    int i,a,b,c;
    cout << "Input a : " ; cin >> a;
    cout << "Input b : " ; cin >> b;
    cout << "Input increment value : " ; cin >> c;
      for (i=a; i<b; i+=c ){
        cout << i << " " ;
    }
    return 0;
}
