#include <iostream>

using namespace std;

int main()
{ /*Diketahui orang A menampung 5 bilangan interger.
    Jika array terdapat angka 2 maka hapus angka 2 tsb
   int a[5];
   int x;
   x=0;
   int ind;

   /*inout bilangan
   for(int i=0;i<5;i++){
    cout << "input bil index ke- " << i+1 << ": " ; cin >> a[i];
   }
   cout << "isi array: " ;
   for(int i=0;i<5;i++){
     cout << a[i] << " " ;
   }
   cout << endl;
   int length =sizeof (a)/sizeof(int);
   cout << "length: " << length << endl;

   //cari 2
   for (int i=0;i<5;i++){
    if(a[i]==2){
        ind = i;
    }
   }
   //array baru
   for(int i=ind;i<4;i++){
    a[i] = a[i+1];
   }
   //tampil
   cout << "hasil: " ;
   for(int i=0;i<4;i++){
    cout << a[i] << " ";
   }*/

   int i,n;
   cout << "input n: " ; cin >> n;
   int a[n];
   for(i=0;i<n;i++){
    cout << "input bil ke-" << i+1 << " : " ; cin >> a[i];
   }
   cout << "Hasil Array: " << endl;
   for(i=0;i<n;i++){
    cout << a[i] << " ";
   }
   cout << "\nHasil Array Bilangan Pangkat 2: " << endl;
   for(i=0;i<n;i++){
    /*a[i] = (i+1)*(i+1);*/
    a[i] = a[i]*a[i];
    cout << a[i] << " ";
   }



    return 0;
}
