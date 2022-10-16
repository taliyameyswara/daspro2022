#include <iostream>

using namespace std;

int main()
{
    //PDP6. Kasus 2
    //Taliya Meyswara A11.2022.14163
    //04 Oktober 2022

    cout << "Program Menampilkan Diskon dan Harga Setelah Diskon" << endl;

    int barang,harga, diskon, total;
    harga = 10000;
    total = (harga*barang) - diskon;
    cout << "Input jumlah barang yang dibeli = " ; cin >> barang;
    if (barang >=3 && barang <= 5){
        diskon = (harga*barang) * 0.02;
        cout << "Mendapatkan diskon sebesar 2%" << endl;
        cout << "Harga yang harus dibayarkan = " << total << endl;
    }
    else if (barang >=6 && barang <=10){
        diskon = (harga*barang) * 0.05;
        cout << "Mendapatkan diskon sebesar 5%" << endl;
        cout << "Harga yang harus dibayarkan = " << total << endl;
    }
    else if (barang >=11 && barang <=17){
        diskon = (harga*barang) * 0.1;
        cout << "Mendapatkan diskon sebesar 10%" << endl;
        cout << "Harga yang harus dibayarkan = " << total << endl;
    }
    else {
        diskon = (harga*barang) * 0.2;
        cout << "Mendapatkan diskon sebesar 20%" << endl;
        cout << "Harga yang harus dibayarkan = " << total << endl;
    }
    return 0;
}
