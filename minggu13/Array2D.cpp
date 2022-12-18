#include <iostream>

using namespace std;

int main()
{
    cout << "Array 2D" << endl;
    cout << "======================" << endl;
    /**
     diketahui sebuah larik atau array berukuran 2 x 3. Buatlah program array
     2D untuk menampilkan hasil seperti output berikut
    */
    cout << "Kasus 1" << endl;
    int a[2][3] = {2,10,5,7,1,3};
    int i,j;
    for (i=0; i<2; i++){
        for (j=0; j<3;j++){
            cout << a[i][j] << "\t" ;
        }
        cout << "\n";
    }
    cout << endl;

    cout << "Modifikasi Kasus 1" << endl;
    int b[2][3];
    cout << "Input elemen array: " << endl;
    for(i=0;i<2;i++){
         for(j=0;j<3;j++){
            cin >> b[i][j];
         }
    }
    cout << "Hasil Array: " << endl;
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            cout << b[i][j] << "\t" ;
        }
        cout << "\n" ;
    }

    return 0;
}
