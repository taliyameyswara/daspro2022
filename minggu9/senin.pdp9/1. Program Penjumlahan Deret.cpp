#include <iostream>

using namespace std;

int main()
{
    /**Taliya Meyswara A11.2022.14163**/
	/*
	Kasus 1 - Notasi
    Program Penjumlahan Deret
        {menjumlahkan deret 5 angka}
    Kamus
        i,n,sum (interger)
    Algoritma
	sum=0
        for i = 1
        to n (i<=n)
        do :
	sum=sum+i
        output (i)
        i <- i+1
	
	output ("Hasil penjumlahan = ")(sum)
	*/
	
    cout << "Kasus 1" << endl;

    //modifikasi sebanyak n

    int i,n,sum;
    sum=0;
    cout << "Input batas : " ; cin >> n;
    for(i=1; i<=n; i++){
        sum=sum+i;
        cout << i << " ";
    }
    cout << endl;
    cout << "Hasil penjumlahan = " << sum << endl;
    return 0;
}