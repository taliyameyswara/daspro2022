#include <iostream>

using namespace std;

int main()
{   //Selasa, 22 November 2022
    //Taliya Meyswara (A11.2022.14163)
    cout << "PDP10 - Kasus 2" << endl;
    cout << "Find the Smallest / the Largest" << endl;
    int i,sum,nilai,k,b,n;
    k=100;
    b=0;
    nilai=6;
    i=1;
    while(i<=nilai){
        cout << "Input bilangan ke-" << i << " : " ;
        cin >> n;
        if(k>n){
            k=n;
        }
        if(b<n){
            b=n;
        }
    i++;
    }
    cout << "nilai kecil : " << k << endl;
    cout << "nilai besar : " << b << endl;
    return 0;
}
