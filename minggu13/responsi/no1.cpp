#include <iostream>
using namespace std;
int main(){
   int i;
   int a[5] = {1,2,3,4,5};
   cout << "Array: { " ;
   for(i=0;i<5;i++){
    cout << a[i] << ", " ;
   } 
   cout << "}" << endl;

   int j = 0;
   int even[j];
   int sum = 0;
   cout << "Bilangan Genap: " ;
   for(i=0;i<5;i++){
    if(a[i]%2==0){
        even[j] = a[i];
        j = j+1;
         cout << a[i] << " " ;
          sum = sum + a[i];
    }
   } 
   cout << endl;
   cout << "Hasil penjumlahan elemen genap: " <<  sum << endl;
    return 0;
}