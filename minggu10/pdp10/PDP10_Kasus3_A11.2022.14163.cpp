#include <iostream>

using namespace std;

int main()
{   //Selasa, 22 November 2022
    //Taliya Meyswara (A11.2022.14163)
    cout << "PDP10 - Kasus 3" << endl;
    cout << "Deret Ganjil / Genap" << endl;
    int a,b,i,g,gg;
    cout << "Input A : " ; cin >> a;
    cout << "Input B : " ; cin >> b;
    i=a;
    while (i<b) {
    if (i % 2 == 0){
    cout << "Deret bilangan genap = " ;
    cout << i << " ";
    }
    i++;
    }
    i=a;
    while (i<b){
    if(i%2 != 0) {
        cout << i << " ";
    }
    cout << "Deret bilangan ganjil = " ;
    cout << i << " ";
    i++;
    }
    return 0;
}
