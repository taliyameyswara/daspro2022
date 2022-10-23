#include <iostream>

using namespace std;

int main()
{
    cout << "3 Input Bilangan Terbesar, Terkecil, atau Sama" << endl;
    int bil1,bil2,bil3;
    cout << "Input bilangan pertama = " ; cin >> bil1;
    cout << "Input bilangan kedua = " ; cin >> bil2;
    cout << "Input bilangan ketiga = "; cin >> bil3;

    //terkecil
        if (bil1<bil2 && bil1<bil3){
            cout << bil1 << " adalah bilangan terkecil" << endl;
        }
        else if (bil2<bil1 && bil2<bil3){
            cout << bil2 << " adalah bilangan terkecil" << endl;
        }
        else if (bil3<bil1 && bil3<bil2){
            cout << bil3 << " adalah bilangan terkecil" << endl;
        }

    //terbesar
        if (bil1>bil2 && bil1>bil3){
            cout << bil1 << " adalah bilangan terbesar" << endl;
        }
        else if (bil2>bil1 && bil2>bil3){
            cout << bil2 << " adalah bilangan terbesar" << endl;
        }
        else if (bil3>bil2 && bil3>bil2){
            cout << bil3 << " adalah bilangan terbesar" << endl;
        }

    //sama
        if (bil1==bil2 || bil1==bil3 || bil2==bil1 || bil2==bil3 || bil3==bil1 || bil3==bil2){
            cout << "ada bilangan yang sama" << endl;
        }


    return 0;
}
