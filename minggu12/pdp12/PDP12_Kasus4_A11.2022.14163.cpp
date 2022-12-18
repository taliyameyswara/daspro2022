#include <iostream>

using namespace std;

int main()
{
    //Kasus 4 - Taliya Meyswara (A11.2022.14163)
    int i,n;
    cout << "Input n: " ; cin >> n;
    int arr[n];
    for(i=0;i<n;i++){
        cout << "Input ke-" << i+1 << ": " ; cin >> arr[i];
    }
    cout << "\nHasil Array: " ;
     for (i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    int j=0;
    int genap[j];
    cout << "Hasil Bilangan Genap: " ;
    for (i=0;i<sizeof arr/sizeof(arr[n]);i++){
            /*if(i%2==1){
            cout << arr[i] << " ";
            }*/
            if(arr[i]%2==0){
                genap[j]=arr[i];
                j = j+1;
                cout << arr[i] << " ";
            }
    }
    cout << endl;
    int ganjil[j];
    cout << "Hasil Bilangan Ganjil: " ;
    for (i=0;i<sizeof arr/sizeof(arr[n]);i++){
        /*if(i%2==0){
            cout << arr[i] << " ";
        }*/
            if(arr[i]%2==1){
                ganjil[j]=arr[i];
                j = j+1;
                cout << arr[i] << " ";
            }
    }
    return 0;
}
