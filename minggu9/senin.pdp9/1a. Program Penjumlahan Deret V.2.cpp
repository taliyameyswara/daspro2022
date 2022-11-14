#include <iostream>

using namespace std;

int main()
{
    /**Taliya Meyswara A11.2022.14163**/
	/*
	Kasus 1a - Notasi
    Program Penjumlahan Deret
        {modifikasi menjumlahkan deret n angka}
    Kamus
        i,n,sum (interger)
    Algoritma
	sum=0
        for i = 1
        to n (i<=5)
        do :
	i <- i+1
        output ("Input bilangan ke-")(i)(" ")
	input (n)
        sum+=n
	
	output ("Hasil penjumlahan = ")(sum)
	*/

    cout << "Kasus 1a" << endl;

    int i,sum,n;
    sum=0;
    for (i=1; i<=5; i++){
        cout << "Input bilangan ke-" << i << " : " ;
        cin >> n;
        sum+=n;
    }
    cout << "Hasil penjumlahan = " << sum << endl;
    return 0;
}