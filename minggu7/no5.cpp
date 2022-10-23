#include <iostream>

using namespace std;

int main()
{
    /**
    Buatlah program yang menerima dua digit bilangan integer positif. Bilangan
    tersebut dapat ditampilkan atau dieksekusi dengan syarat:
    a. Bilangan adalah kelipatan 5
    b. Bilangan tidak lebih dari 100
    c. Jika angka terakhir adalah 0, maka angka tersebut diganti dengan 5

    Program Dua Digit Bilangan Interger Positif
    {Bilangan kelipatan lima, tidak lebih dari 100, jika angka terakhi 0 ganti dgn 5}
    KAMUS
    num,first,sec,ganti : interger;

    ALGORITMA
    input (num)
    if (num>=10 && num<=99) then
        first = num/10
        sec = num%10
        if (num%5==0 && num<=100) then
            output ("Bilangan kelipatan 5") ("Bilangan tidak lebih dari 100")
            ("Bilangan anda = ") (num)
        else if (sec==0) then
        output ("Angka terakhir anda 0, maka angka harus diganti dengan 5")
        input ("Ketik angka 5 = ") (ganti)
        output
            num = (first*10) + ganti;
            ("Angka anda = ")
    else output ("Angka anda kurang atau lebih dari 2 digit")

    */

    cout << "Program Dua Digit Bilangan Interger Positif" << endl;
    int num,first,sec,result,ganti;
    cout << "Input dua digit angka = " ; cin >> num;
    if (num>=10 && num<=99){
            first = num/10;
            sec = num%10;
        if (num%5==0 && num<=100 && sec==0){
            cout << "Bilangan kelipatan 5" << endl;
            cout << "Bilangan tidak lebih dari 100" << endl;
            cout << "Bilangan anda = " << num << endl;
            cout << "Angka terakhir anda 0, maka angka harus diganti dengan 5" << endl;
            cout << "Ketik angka 5 untuk mengganti = " ; cin >> ganti;
            result = (first*10)+ganti;
            cout << "Bilangan anda = " << result << endl;
        }
        else {
            cout << "Bilangan bukan kelipatan 5" << endl;
            cout << "atau bilangan lebih dari 100" << endl;
        }
    }
    else {
        cout << "Angka anda kurang atau lebih dari 2 digit" << endl;
    }

    return 0;
}
