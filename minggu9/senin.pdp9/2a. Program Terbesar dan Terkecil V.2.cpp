#include <iostream>

using namespace std;

int main()
{
    /**Taliya Meyswara A11.2022.14163**/
	/*
Kasus 2a - Notasi
    Program Terbesar dan Terkecil
        {program menampilkan angka terbesar dan angka terkecil dari N deret
	bilangan.}
    Kamus
        i,sum,nilai,k,b,n (interger)
	av (float)
    Algoritma
	k=100
    	b=0
    	sum=0
    	av=0

	input (nilai)
        for i = 1
        to nilai (i<=nilai)
        do :
	i <- i+1
	
	output ("Input bilangan ke-")(i)(" ")
	input (n)
        output (i)

        if (k>n) then k=n
	if (b<n) then b=n

	sum += n

	av=(float)sum/nilai
	output ("nilai kecil")(k)
	output ("nilai besar")(b)
	output ("hasil penjumlahan")(sum)
	output ("rata-rata")(av)
	*/

    cout << "Kasus 2a" << endl;

    int i,sum,nilai,k,b,n;
    float av;
    k=100;
    b=0;
    sum=0;
    av=0;
    cout << "input banyak data : " ; cin >> nilai;
    for(i=1; i<=nilai; i++){
        cout << "Input bilangan ke-" << i << " : " ;
        cin >> n;
        if(k>n){
            k=n;
        }
        if(b<n){
            b=n;
        }
    sum += n;
    }
    av=(float)sum/nilai;
    cout << "nilai kecil : " << k << endl;
    cout << "nilai besar : " << b << endl;
    cout << "hasil penjumlahan : " << sum << endl;
    cout << "rata-rata : " << sum << "/" << nilai << " = " << av << endl;
    return 0;
}