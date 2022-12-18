#include <iostream>
using namespace std;
int main(){
    int a[2][3];
    int sum = 0;
    cout << "Input elemen array:" << endl;
    for (int i=0;i<2;i++){
        for(int j =0;j<3;j++){
            cin >> a[i][j];
        }
        cout << endl;
    }
    cout << "Hasil array: " << endl;
    for (int i=0;i<2;i++){
        for(int j =0;j<3;j++){
            cout << a[i][j] << " ";
            sum = sum + a[i][j];
        }
        cout << endl;
    }
    cout << "Jumlah array: " << sum << endl;
    return 0;
}