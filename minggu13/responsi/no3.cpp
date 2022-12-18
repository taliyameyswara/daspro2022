#include <iostream>
using namespace std;
int main(){
    int a[] = {10, 10, -1, -1, -1, 10, 2, 2, 2, -1, -1, 1, 1, -1, -1, 10, 10};
    int i;
    int jumlah1 = 0;
    int jumlah2 =0;
    int jumlah3 =0;
    int jumlah4 =0;
    for(i=0;i<sizeof(a)/sizeof(*a);i++){
        if (a[i]==10){
            jumlah1++; 
        }
    }
    cout << "Jumlah bilangan 10: " << jumlah1 << endl;
     for(i=0;i<sizeof(a)/sizeof(*a);i++){
        if (a[i]==2){
            jumlah2++;
        }
    }
     cout << "Jumlah bilangan 2: " << jumlah2 << endl;
     for(i=0;i<sizeof(a)/sizeof(*a);i++){
        if (a[i]==-1){
            jumlah3++;
        }
    }
     cout << "Jumlah bilangan -1: " << jumlah3 << endl;
     for(i=0;i<sizeof(a)/sizeof(*a);i++){
        if (a[i]==1){
            jumlah4++;
        }
    }
     cout << "Jumlah bilangan 1: " << jumlah4 << endl;
    return 0;
}