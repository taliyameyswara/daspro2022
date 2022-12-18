#include <iostream>
using namespace std;

    /**. Buatlah program untuk memasukkan 10 bilangan integer positif secara acak. 
     * Program dapat mengubah angka ke positif yaitu dengan mengalikan -1 
     * jika angka yang diinputkan adalah negative..*/

int main(){
   int i;
   int x[10];
   /*for(i=0;i<10;i++){
    cout << "Input bilangan ke-" << i+1 <<": " ; cin >> x;
    if(x<1){
         x =  x*(-1);
     }
     cout << "Bilangan positif: " << x << endl;
   }*/
   for(i=0;i<10;i++){
    cout << "Input bilangan ke-" << i+1 <<": " ; cin >> x[i];
   }
    cout << "Deret biasa: " <<  " ";
   for(i=0;i<10;i++){
     cout << x[i] << " ";
   }
   cout << endl;
   cout << "Deret positif: " <<  " ";
   for(i=0;i<10;i++){
     if(x[i]<0){
         x[i] =  x[i]*(-1);
     }
     cout << x[i] << " ";
   }
    return 0;
}