#include <iostream>

using namespace std;

int main()
{
    /*cout << "Faktorial" << endl;
    int bil, hasil, i;
    cout << "Input bilangan: " ; cin >> bil;
    i = 1;
    hasil=1;
    while(i<=bil){
        hasil = hasil*i;
    i++;
    }
    cout << "Hasil Faktorial: " << hasil;*/


    /*cout << "Find the Smallest and the Largest" << endl;
    int i,bil,k,b;
    i=1;
    k=100;
    b=0;
    while(i<=6){
        cout << "Input bilangan ke-" << i << ": " ; cin >> bil;
        if (k>bil){
            k=bil;
        }
        if(b<bil){
            b=bil;
        }
        i++;
    }
    cout << "Bilangan terbesar: " << b << endl;
    cout << "Bilangan terkecil: " << k << endl;*/

    /*cout << "Deret Ganjil dan Deret Genap" << endl;
    int i,a,b,z;
    cout << "Input A: " ; cin >> a;
    cout << "Input B: " ; cin >> b;
    cout << "Deret Bilangan Genap: " ;
    i=a;
    while(i<=b){
        if(i%2==0){
        cout << i << " ";
        }
    i++;
    }
    cout << " " << endl;
    cout << "Deret Bilangan Ganjil: " ;
    z=a;
    while(z<=b){
        if(z%2==1){
        cout << z << " ";
        }
    z++;
    }*/

    /*cout << "program menampilkan bilangan 1 – 50 yang habis dibagi 5" << endl;
    int i;
    for (i=1; i<=50; i++){
        if(i%5==0){
            cout << i << " ";
        }
    }*/

    /*cout << "program menampilkan bilangan 50 – 101 dengan ketentuan bilangan tersebut habis dibagi 5 atau habis dibagi 7." << endl;
    int i;
    for (i=50; i<=101; i++){
        if (i%5==0){
            cout << i << " ";
        }
    for (i=50; i<=101; i++){
        if(i%7==0){
            cout << i << " ";
        }
    }
    }*/

    /*cout << "Penjumlahan deret" << endl;
    int i,n,jml;
    jml=0;
    cout << "Input batas: " ; cin >> n;
    cout << "Deret: " ;
    for (i=1; i<=n; i++){
        cout << i << " " ;
        jml = jml+i;
    }
    cout << " " << endl;
    cout << "Hasil penjumlahan: " << jml;*/

    cout << "Penjumlahan deret versi 2" << endl;
    int i,n,jml,batas;
    jml=0;
    cout << "Input batas: " ; cin >> batas;
    for (i=1; i<=batas; i++){
    cout << "Input bilangan ke-" << i << ": " ; cin >> n;
    jml=jml+i;
    }
    cout << "Hasil Penjumlahan Deret: " << jml;



    return 0;
}
