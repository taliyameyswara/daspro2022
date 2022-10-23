#include <iostream>

using namespace std;

int main()
{
    cout << "Kategori Suhu" << endl;
    int suhu;
    cout << "Input suhu = " ; cin >> suhu;
    if (suhu>=-20 && suhu<=50){
        if (suhu<20) {
            cout << "suhu udara dingin" << endl;
        }
        else if (suhu>=20 && suhu<=29) {
            cout << "suhu udara normal" << endl;
        }
        else {
            cout << "suhu udara panas" << endl;
        }
    }
    else {
        cout << "Input suhu tidak berada pada range titik terendah dan titik tertinggi" << endl;
    }

    return 0;
}
