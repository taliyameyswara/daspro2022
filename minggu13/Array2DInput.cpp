#include <iostream>

using namespace std;

int main()
{
    cout << "Array 2D" << endl;
    cout << "======================" << endl;
    cout << "Kasus 2" << endl;
    int b,k;
    cout << "Input baris: " ; cin >> b;
    cout << "Input kolom: " ; cin >> k;
    int a[b][k];
    int i,j;
    cout << "Input elemen array:  " << endl;
    for (i=0;i<b;i++){
        for (j=0;j<k;j++){
           cin >> a[i][j] ;
        }
    }
    cout << endl;
    cout << "Hasil array: " << endl;
    for (i=0;i<b;i++){
        for (j=0;j<k;j++){
            cout << a[i][j] << "\t" ;
        }
        cout << "\n" ;
    }
    cout << "Array baris 0 kolom 1: " << a[0][1] << endl;
    cout << "Array baris 1 kolom 0: " << a[1][0];
    return 0;
}
