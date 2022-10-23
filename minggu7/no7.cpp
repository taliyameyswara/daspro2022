#include <iostream>

using namespace std;

int main()
{
    cout << "Kategori Suhu" << endl;
    int suhu, pil, ubah,x;
    cout << "Input suhu = " ; cin >> suhu;
    if (suhu>=-20 && suhu<=50){
        if (suhu>0 && suhu<=20){
        cout << "suhu udara dingin" << endl;
        cout << "ketik 1 untuk memilih warm heater" << endl;
        cout << "ketik 2 untuk memilih kipas = " ; cin >> pil;
        switch (pil){
        case 1: cout << "warm heater" << endl;
                ubah = suhu*0.5;
                suhu = suhu+ubah;
                cout << "suhu normal anda menjadi = " << suhu << endl;
            break;
        case 2: cout << "kipas penghangat" << endl;
                ubah = suhu*0.25;
                suhu = suhu+ubah;
                cout << "suhu normal anda menjadi = " << suhu << endl;
            break;
        }
        }
        else if (suhu<0){
            cout << "suhu udara dingin" << endl;
            cout << "ketik 1 untuk memilih warm heater" << endl;
            cout << "ketik 2 untuk memilih kipas = " ; cin >> pil;
            switch (pil){
            case 1: cout << "warm heater" << endl;
                ubah = suhu + 25;
                //ubah = -1 + 25 = 24
                suhu = (suhu-ubah)*(-1);
                //-1 + 24
                cout << "suhu normal anda menjadi = " << suhu << endl;
            break;
        case 2: cout << "kipas penghangat" << endl;
                ubah = suhu + 25;
                suhu = (suhu-ubah)*(-1);
                cout << "suhu normal anda menjadi = " << suhu << endl;
            break;
            }
        }
        else if (suhu>=20 && suhu<=29) {
            cout << "suhu udara normal" << endl;
        }
        else {
            cout << "suhu udara panas" << endl;
            cout << "ketik 1 untuk menurunkan suhu ac, ketik 2 untuk menurunkan suhu kipas = " ; cin >> pil;
            switch(pil){
            case 1: ubah = suhu*0.5;
                    suhu = suhu-ubah;
                    cout << "suhu AC menjadi = " << suhu << endl;
                break;
            case 2: ubah = suhu*0.25;
                    suhu = suhu-ubah;
                    cout << "suhu kipas menjadi = " << suhu << endl;
                break;
            }
        }
        }
     else {
        cout << "Input suhu tidak berada pada range titik terendah dan titik tertinggi" << endl;
    }
    return 0;
}
