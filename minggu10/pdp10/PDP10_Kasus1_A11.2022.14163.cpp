#include <iostream>

using namespace std;

int main()
{   //Selasa, 22 November 2022
    //Taliya Meyswara (A11.2022.14163)
    cout << "PDP10 - Kasus 1" << endl;
    int i,bil,hasil;
    cout << "Input Bilangan = " ; cin >> bil;
    i=1;
    hasil=1;
    while(i<=bil){
        hasil = hasil*i;
        i++;
    }
    cout << "Hasil faktorial " << bil << " adalah " << hasil;
    return 0;
}
