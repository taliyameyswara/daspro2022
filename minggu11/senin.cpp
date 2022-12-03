#include <iostream>

using namespace std;

int main()
{
    /**NESTED LOOP
    Senin, 28 Nov 2022
    Taliya Meyswara (A11.2022.14163)
    */

    int i,j,n,a,b;
    /**
    i = outer loop
    j = inner loop

    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            n=n+1;
            cout << n << "\t ";
        }
        cout << endl;
    }*/

    /**Latihan 1*/
    n=26;
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            n=n-1;
            cout << n << "\t";
        }
         cout << endl;
    }

    cout << endl;
     /**Latihan 2*/
     a=0;
     for(i=1;i<=5;i++){
        for(j=1;j<=10;j++){
            a=a+1;
            if(a%2==0){
              cout << a << "\t";
            }
        }
         cout << endl;
     }

     cout << endl;
     /**Latihan 3*/
     b=1;
     for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            b=b+2;
            cout << b << "\t";
        }
         cout << endl;
     }
    return 0;
}
