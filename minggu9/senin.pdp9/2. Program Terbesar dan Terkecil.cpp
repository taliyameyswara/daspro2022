#include <iostream>

using namespace std;

int main()
{
    /**Taliya Meyswara A11.2022.14163**/
	/*
	Kasus 2 - Notasi
    Program Terbesar dan Terkecil
        {program menampilkan angka terbesar dan angka terkecil dari N deret
	bilangan.}
    Kamus
        i,n,kecil,besar (interger)
    Algoritma
	kecil=100
	besar=0

	input (n)
        for i = 1
        to n (i<=n)
        do :
	i <- i+1
        output (i)

	for i = 1
        to n (i<=n)
        do :
	i <- i+1
        if (kecil>i) then kecil=i
	output (kecil)("compare with")(i)
	output ("nilai kecil")(kecil)

	for i = 1
        to n (i<=n)
        do :
	i <- i+1
	output (besar)("compare with")(i)
        if (besar<i) then besar=i
	output ("nilai besar")(besar)
	*/

    cout << "Kasus 2" << endl;

    int i,n,kecil,besar;
    kecil=100;
    besar=0;
    /* versi pak danang xixix
	cout << "Input batas : " ; cin >> n;
    for(i=1; i<=n; i++){
        cout << i << " ";
    }
    cout << endl;
    for(i=1; i<=n; i++){
        if(kecil>i){
            kecil=i;
        }
        cout << kecil << " compare with " << i << endl;
        cout << "nilai kecil : " << kecil << endl;
    }
    cout << endl;
    for(i=1; i<=n; i++){
        cout << besar << " compare with " << i << endl;
        if(besar<i){
            besar=i;
        }
        cout << "nilai besar : " << besar << endl;
    }*/

    cout << "Input batas : " ; cin >> n;
    for(i=1; i<=n; i++){
        cout << i << " ";
    }
    cout << endl;
    for(i=1; i<=n; i++){
        if(kecil>i){
            kecil=i;
        }
        if (besar<i){
            besar=i;
        }
    }
    cout << "nilai terbesar = " << besar << endl;
    cout << "nilai terkecil = " << kecil << endl;
    return 0;
}