#include <iostream>
using namespace std;
int main(){
   int i,n;
   cout << "Masukkan ukuran larik: " ; cin >> n;
   int a[n];
   for(i=0;i<n;i++){
    cout << "Input elemen-" << i+1 << ": " ; cin >> a[i] ;
   } 

    cout << endl;
    cout << "Larik utama: [ " ;
    for(i=0;i<n;i++){
    cout << a[i] << " " ;
   } 
   cout << "]" << endl;


    int even[n];
    int j =0;
    cout << "Larik genap: [ ";
    for(i=0;i<n;i++){
    if(a[i]%2==0){
        even[j] = a[i];
        j=j+1;
        cout << a[i] << " ";
    }
   } 
   cout << "]" << endl;

    int odd [n];
    int k=0;
   cout << "Larik ganjil: [ ";
    for(i=0;i<n;i++){
    if(a[i]%2!=0){
        odd[k] = a[i];
        k=k+1;
        cout << a[i] << " ";
    }
   } 
   cout << "]" << endl;
    return 0;
}