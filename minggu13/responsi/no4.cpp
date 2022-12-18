#include <iostream>
using namespace std;

    /**. Diketahui deret bilangan kelipatan 2 dari X sampai Y. buatlah program untuk menghitung
    jumlah deret tersebut.*/

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
    cout << "Deret kelipatan 2: " ;
   for(i=awal;i<=akhir;i++){
    if(i%2==0){
         cout << i << " ";
         sum = sum + i;
    }
   }
   cout << endl;
   cout << "Jumlah deret: " << sum << endl;

    return 0;
}