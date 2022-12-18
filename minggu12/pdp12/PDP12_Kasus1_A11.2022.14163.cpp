#include <iostream>

using namespace std;

int main()
{
    //Kasus 1 - Taliya Meyswara (A11.2022.14163)
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
    return 0;
}
