#include <iostream>

using namespace std;

int main()
{
    /**
    Buatlah program untuk menentukan bilangan genap dan ganjil
    mulai dari 1 hingga data ke n. Data masukan adalah data ke n.

    int i,n;
    char ulang;
    i=1;
    do{cout << "Tentukan banyak data: " ; cin >> n;

    cout << "Bilangan genap" << endl;
    i=1;
    while(i<=n){
        if(i%2==0){
            cout << i << " ";
        }
    i++;
    }
    cout << " " << endl;
    cout << "Bilangan ganjil" << endl;
    i=1;
    while (i<=n){
        cout << i << " ";
        i+=2;
    }
    cout << " " << endl;
    cout << "ulang? (y/t) = " ; cin >> ulang;
    i++;
    }
    while (ulang =='y');
    cout << "Done" << endl;
    */


    /**Hitunglah nilai rata-rata (mean) sejumlah data dari 1 hingga n. Data masukan adalah n.
    int i,n;
    float sum,avg;
    sum=0;
    avg=0;
    cout << "Tentukan banyak data: " ; cin >> n;
    i=1;
    while(i<=n){
        cout << i << " ";
    sum+=i;
    i++;
    }
    avg=sum/n;
    cout<< "\nJumlah data: " << sum << endl;
    cout << "Rata-rata: " << avg << endl;*/

    /** Buatlah algoritma/program untuk mencetak
    angka dari 1,2,...,n, dengan nilai n di inputkan
    melalui keyboard. Hitung rata2nya

    int i,n,data;
    float sum,avg;
    sum=0;
    avg=0;
    cout << "Input banyak data = " ;
    cin >> data;
    i=1;
    while(i<=data){
        cout << "Input nilai ke-" << i << " : ";
        cin >> n;
    i++;
    sum+=n;
    }
    avg=sum/data;
    cout << "Jumlah data = " << sum << endl;
    cout << "Rata-rata (mean) = " << avg << endl;*/

    /**Apabila angka yang keluar dapat di bagi 3 dan 4 maka akan keluar "Dua Belas"
    Apabila angka yang keluar dapat di bagi 3 dan 7 maka akan keluar "Dua Satu"
    Apabila angka yang keluar dapat di bagi 3, 4, dan 7 angka tersebut dikeluarkan
    Selain itu angka dikeluarkan sesuai urutan.


    int i,n;
    cout << "Input banyak data = " ; cin >> n;
    i=1;
    while(i<=n){
        if(i%3==0 && i%4==0){
                if(i%7==0) {
                    cout << i << " ";
                }
                else{
                    cout << "Dua Belas" << endl;
                }
            }
        else if(i%3==0 && i%7==0){
            cout << "Dua Satu" << endl;
        }
        else{
            cout << i << " ";
        }
    i++;
    }*/

    /** do while - perulangan tak tentu
    int i;
    char ulang;
    i=1;
    do{
        cout << "Apakah loop lagi?(y/t)" ; cin >> ulang;
        i++;
    }
    while (ulang=='y');
    cout << "done" << endl;
    */
    return 0;
}
