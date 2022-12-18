#include <iostream>

using namespace std;

int main()
{
    //Kasus 5 - Taliya Meyswara (A11.2022.14163)
    int i,n;
    cout << "Input n: " ; cin >> n;
    int arr[n];
    cout << "Hasil Array: " ;
     for (i=0;i<n;i++){
        if (i%2==0){
            cout << "0" << " ";
        }
        else{
            cout << "1" << " ";
        }
    }
    return 0;
}
