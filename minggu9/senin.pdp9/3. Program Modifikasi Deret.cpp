#include <iostream>

using namespace std;

int main()
{
    /**Taliya Meyswara A11.2022.14163**/
	/*
	Kasus 3 - Notasi
    Program Modifikasi Deret
        {program menampilkan deret N bilangan integer. Jika bilangan deret 		adalah 2 maka diganti dengan bilangan pangkat 2.}
    Kamus
        i,n, ganti (interger)
    Algoritma
	(input) (n)
	for i = 1
        to n (i<=n)
        do :
	i <- i+1
	ganti =i
	if (i==2) then ganti=i*i
	output (ganti) (" ")
	*/

    cout << "Kasus 3" << endl;

    int i,n, ganti;

    cout << "input banyak data : " ; cin >> n;
    for(i=1;i<=n;i++){
        ganti = i;
        if(i==2){
            ganti=i*i;
        }
        cout << ganti << " " ;
    }
    return 0;
}