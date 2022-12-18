#include <iostream>

using namespace std;

int main()
{
    //Kasus 3 - Taliya Meyswara (A11.2022.14163)
    int i,n;
    cout << "Input n: " ; cin >> n;
    int arr[n];
    for(i=0;i<n;i++){
        cout << "Input ke-" << i+1 << ": " ; cin >> arr[i];
    }
    cout << "Hasil Array: " ;
     for (i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    int k,b,sum;
    float av;
    k=100;
    b=0;
    sum=0;
    av=0;
    for (i=0;i<n;i++){
       if(k>arr[i]){
            k=arr[i];
        }
        if(b<arr[i]){
            b=arr[i];
        }
    sum = sum + arr[i];
    av = (float)sum/n;
    }
    cout << "Nilai terkecil : " << k << endl;
    cout << "Nilai terbesar : " << b << endl;
    cout << "Hasil penjumlahan : " << sum << endl;
    cout << "Rata-rata : " << sum << "/" << n << " = " << av << endl;
    return 0;
}
