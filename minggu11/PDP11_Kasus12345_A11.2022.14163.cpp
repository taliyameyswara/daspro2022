#include <iostream>

using namespace std;

int main()
{
    /**
    Taliya Meyswara (A11.2022.14163)
    PDP 11
    */
   int i,j,n,k;
   cout << "input batas = " ; cin >> n;

   /**Kasus 1*/
   cout << "Kasus 1" << endl;
   for(i=1;i<=n;i++){
    for(j=1;j<=i;j++){
        cout << j << " ";
    }
    cout << endl;
   }
   cout << endl;

   /**Kasus 2*/
   cout << "Kasus 2" << endl;
   for(i=1;i<=n;i++){
    k=6;
    for(j=1;j<=i;j++){
            k=k-1;
        cout << k<< " ";
    }
    cout << endl;
   }
   cout << endl;

   /**Kasus 3*/
   cout << "Kasus 3" << endl;
   for(i=1;i<=n;i++){
    for(j=1;j<=i;j++){
        cout << "*" << " ";
    }
    cout << endl;
   }
   cout << endl;

   /**Kasus 4*/
   cout << "Kasus 4" << endl;
   for(i=n;i>=1;i--){
    for(j=1;j<=i;j++){
        cout << "*" << " ";
    }
    cout << endl;
   }
   cout << endl;

    /**Kasus 4.2*/
   cout << "Kasus 4.2" << endl;
   int s;
   for(i=1;i<=n;i++){
        //spasi kiri
    for(s=1; s<=(n-i); s++){
        cout << " " << " ";
        }
    for (j=1;j<=((i*2)-1);j++){
        cout << "*" << " ";
    }
        cout << endl;
    }

    cout << endl;
   /**Kasus 5*/
   cout << "Kasus 5" << endl;
   for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
        cout << i*j << " ";
    }
    cout << endl;
   }
    return 0;
}
