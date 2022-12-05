#include <iostream>

using namespace std;

int main()
{   /*Buat program dengan array untuk menyimpan nama hari dalam 1 minggu!
    string hari[7];
    int i;
    for(i=0;i<7;i++){
        cout << "input nama hari: " ; cin >> hari[i];
    }
    cout << endl;
    for(i=0;i<7;i++){
        cout <<  hari[i] << endl;
    }*/

    /*Hitung sejumlah nilai float didalam suatu array yangsetiap elemennya di inputkan oleh user!
    int i,n;
    cout << "input batas = " ; cin >> n;
    float nilai[n];
    for(i=1;i<=n;i++){
        cout << "input nilai ke-" << i << " : " ; cin >> nilai[i];
    }
    float sum,mean;
    sum = 0;
    for(i=1;i<=n;i++){
        sum = sum + nilai[i];
        mean = sum/n;
    }
    cout << "hasil penjumlahan = " << sum << endl;
    cout << "rata-rata = " << mean << endl;*/

    /*int a[] = {1,2,3};
    cout << sizeof a/sizeof(a[0]) << endl;
    cout << endl;
    int b[] = {10,-7,3,8,100};
    int i;
    for(i=0;i<sizeof b/sizeof(b[0]);i++){
        cout << b[i] << endl;
    }*/

    /*Buat program dengan array untuk menyimpan nama hari dalam 1 minggu!*/
    string hari[7];
    int i;
    for(i=0;i<sizeof hari/sizeof hari[7];i++){
        cout << "input hari ke-" << i+1 << ": " ; cin >> hari[i];
    }
    cout << endl;
    for (i=0;i<sizeof hari/sizeof hari[7];i++){
        cout << hari[i] << endl;
    }



    return 0;
}
