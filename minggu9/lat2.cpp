#include <iostream>

using namespace std;

int main()
{
   /**
    PT X membuat permainan tebak angka. Pemain diberi kesempatan 3x untuk menebak.
    Jika tebakan benar, program menampilkan pesan "Selamat Anda Benar, Tebakan 3 Ambil Rewardmu"

    Program Permainan Tebak Angka
    {Program tebak angka pemain diberi kesempatan 3x utk menebak. Jika benar
    program menampilkan pesan "Selamat Anda Benar, Tebakan 3 Ambil Rewardmu. Jika salah "Tebak lagi"
    jike kesempatan habis "Maaf anda gagal"}

    KAMUS
    i,n,angka(interger)
    i=1
    n=3
    ALGORITMA
    output ("Tebak Angka")
    while i<=n do
    output ("input angka = ")
    input (angka)
    i++
    ------------------------------------------------------------
    */
    int i,n,angka;
    n = 3;
    i = 1;
    while(i<=n){
    cout << "input angka = " ;
    cin >> angka;
    i++;
    if(angka!=3){
        cout << "tebakan anda salah, tebak lagi" << endl;
    }
    if (angka==3){
        cout << "Selamat Anda Benar, Tebakan 3 Ambil Rewardmu." << endl;
        break;
    }
    if (i>n){
    cout << "Maaf Anda gagal" << endl;
    }
    }

    return 0;
}
