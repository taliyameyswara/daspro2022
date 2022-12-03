#include <iostream>

using namespace std;

int main()
{
    int i,j,col,bar;
    cout << "input kolom = "; cin >> col;
    cout << "input baris = "; cin >> bar;

    /*i=1;
    while(i<=col){
        j=1;
        while(j<=bar){
            cout << j << " ";
            j++;
        }
        cout << endl;
        i++;
    }*/
    /**i=1;
    do{
        j=1;
        do{
            cout << j << " ";
            j++;
        }
        while(j<=col);
        cout << endl;
        i++;
    }
    while(i<=bar);*/
    /**i=1;
    do{
        j=1;
        do{
            cout << j << " ";
            j++;
        }
        while(j<=i);
        cout << endl;
        i++;
    }
    while(i<=bar);*/

    return 0;
}

