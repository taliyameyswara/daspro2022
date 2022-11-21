#include <iostream>

using namespace std;

int main()
{
   /**
    Profesor x akan memberikan nilai terhadap siswanya dengan 4x ujian.
    Buat program untuk menghitung nilai dari 4x ujian terserbut dengan while.

    Program Cetak Nilai
    {Program cetak 4x nilai ujian dengan rata-rata}
    KAMUS
    i,n,nilai,sum(interger)
    avg (float)
    n=4;
    sum=0
    ALGORITMA
    while i<=n do
    output ("input nilai ke-")(i) (" = ")
    input (nilai)
    i++
    sum=sum*i
    avg=(float)sum/n
    ------------------------------------------------------------
    */
    int i,n,nilai,sum;
    float avg;
    n = 4;
    i = 1;
    sum = 0;
    while(i<=n){
    cout << "input nilai ke-" << i << " = " ;
    cin >> nilai;
    sum += nilai;
    i++;

    avg=(float)sum/n;
    }
    cout << "rata-rata nilai = " << sum << "/" << n << " = " << avg << endl;
    return 0;
}
