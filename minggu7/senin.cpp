#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    /*int bil;
    cout << "Input dua digit bilangan = " ; cin >> bil;
    if (bil>=10 && bil<=99){
	cout << "Bilangan anda positif" << endl;
        if (bil%2==0){
        cout << "Bilangan anda genap" << endl;
        }
        else {
        cout << "Bilangan anda ganjil" << endl;
        }
    }
    else if (bil==0){
        cout << "Bilangan anda 0" << endl;
    }
    else if (bil<=-10 && bil>=-99) {
        cout << "Bilangan Anda negatif" << endl;
        if (bil%2==0){
        cout << "Bilangan anda genap" << endl;
        }
        else {
        cout << "Bilangan anda ganjil" << endl;
        }
    }
    else {
        cout << "Bilangan anda kurang atau lebih dari 3 digit" << endl;
    }*/

    int bil,first,sec,ganti;
    cout << "Input dua digit bilangan = " ; cin >> bil;
    if (bil>=10 && bil<=99){
       cout << "Bilangan anda positif" << endl;
        first = bil/10;
        sec = bil%10;
        if (first%2==1){
            cout << "Angka depan anda harus diganti dengan bilangan genap" << endl;
            cout << "Input pengganti = " ; cin >> ganti;
            if (ganti%2==0){
            bil = (ganti*10)+sec;
            cout << "Bilangan anda = " << bil;
            }
            else {
                cout << "Pengganti anda bukan bilangan genap" << endl;
            }
        }
        else if (sec%2==0){
            cout << "Angka belakang anda harus diganti dengan bilangan ganjil" << endl;
            cout << "Input pengganti = " ; cin >> ganti;
            if (ganti%2==1){
            bil = (first*10)+ganti;
            cout << "Bilangan anda = " << bil;
            }
            else {
                cout << "Pengganti anda bukan bilangan ganjil" << endl;
            }
        }
    }
    else if (bil<=-10 && bil>=-99) {
        cout << "Bilangan Anda negatif" << endl;
        first = bil/10;
        sec = bil%10;
        if (first%2==-1){
            cout << "Angka depan anda harus diganti dengan bilangan genap" << endl;
            cout << "Input pengganti = " ; cin >> ganti;
            if (ganti%2==0){
            bil = (ganti*-1*10)+sec;
            cout << "Bilangan anda = " << bil;
            }
            else {
                cout << "Pengganti anda bukan bilangan genap" << endl;
            }
        }
        else if (sec%2==0){
            cout << "Angka belakang anda harus diganti dengan bilangan ganjil" << endl;
            cout << "Input pengganti = " ; cin >> ganti;
            if (ganti%2==1){
            bil = (first*10)+(ganti*(-1));
            cout << "Bilangan anda = " << bil;
            }
            else {
                cout << "Pengganti anda bukan bilangan ganjil" << endl;
            }
        }
     else if (bil==0){
        cout << "Bilangan anda 0" << endl;
    }
    }
    else {
        cout << "Bilangan anda kurang atau lebih dari 3 digit" << endl;
    }

    return 0;
}
