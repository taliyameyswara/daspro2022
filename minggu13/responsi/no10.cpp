#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Input n: " ; cin >> n;
    int a[n];
    int b[n];
    cout << "Input elemen array A:" << endl;
    for (int i=0;i<n;i++){
            cin >> a[i];
    }
    cout << "Input elemen array B:" << endl;
    for (int i=0;i<n;i++){
            cin >> b[i];
    }
    cout << endl;
    cout << "Array A: " << endl;
    for (int i=0;i<n;i++){
        cout << a[i] << " ";
    }
    cout << "\n" << endl;
    cout << "Array B: " << endl;
    for (int i=0;i<n;i++){
        cout << b[i] << " ";
    }
    cout << "\n" << endl;
    cout << "Hasil penjumlahan array A dan B" << endl;
    cout << "Array C:" << endl;
     for (int i=0;i<n;i++){
        int sum = a[i]+b[i];
        cout << sum << " ";
    }
    return 0;
}