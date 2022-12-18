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
    int j = 0;
    int genap1[j];
   cout << "Hasil Bilangan Genap Positif: " ;
    for (i=0;i<sizeof arr/sizeof(arr[n]);i++){
            if(arr[i]>0 && arr[i]%2==0){
            genap1[j]=arr[i];
                j = j+1;
            cout << arr[i] << " ";
            }
    }
    cout << endl;

    int ganjil1[j];
    cout << "Hasil Bilangan Genap Negatif: " ;
    for (i=0;i<sizeof arr/sizeof(arr[n]);i++){
        if(arr[i]<0 && arr[i]%2==0){
                ganjil1[j]=arr[i];
                j = j+1;
            cout << arr[i] << " ";
        }
    }

    cout << endl;


    cout << "Hasil Bilangan Ganjil Positif: " ;
    for (i=0;i<sizeof arr/sizeof(arr[n]);i++){
        if(arr[i]>0 &&arr[i]%2==1){
                ganjil2[j]=arr[i];
                j = j+1;
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    int ganjil2[j];
    cout << "Hasil Bilangan Ganjil Negatif: " ;
    for (i=0;i<sizeof arr/sizeof(arr[n]);i++){
            if(arr[i]<0 && arr[i]%2==1){
            cout << arr[i] << " ";
            }
    }
    cout << endl;





    return 0;
}
