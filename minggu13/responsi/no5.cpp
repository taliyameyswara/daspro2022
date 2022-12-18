#include <iostream>
using namespace std;

    /**. Diketahui deret bilangan genap dari X sampai Y. 
     * buatlah program untuk menghitung ratarata deret tersebut.*/

int main(){
   int i,awal,akhir;
   cout << "Input X: " ; cin >> awal;
   cout << "Input Y: " ; cin >> akhir;
   cout << "Deret: " ;
   for(i=awal;i<=akhir;i++){
    cout << i << " ";
   }
   cout << endl;
   int sum = 0;
   float av = 0;
   int size = 0;
    cout << "Deret kelipatan 2: " ;
   for(i=awal;i<=akhir;i++){
    if(i%2==0){
         cout << i << " ";
         sum = sum + i;
         size++;
         av = (float)sum/size;
    }
   }
   cout << endl;
   cout << "Rata-rata deret: " << av << endl;

    return 0;
}