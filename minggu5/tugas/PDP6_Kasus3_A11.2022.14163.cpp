#include <iostream>

using namespace std;

int main()
{
    //PDP6. Kasus 3
    //Taliya Meyswara A11.2022.14163
    //04 Oktober 2022

    cout << "Program Menampilkan Diskon dan Harga Setelah Diskon" << endl;

    int barang, harga, diskon, total;
    harga = 10000;
    cout << "Input jumlah barang yang dibeli = " ; cin >> barang;

    if (barang >=3 && barang <= 5){
        diskon = (harga*barang) * 0.02;
        total = (harga*barang) - diskon;
        cout << "Mendapatkan diskon sebesar 2%" << endl;
        cout << "Harga yang harus dibayarkan = " << total << endl;
    }
    else if (barang >=6 && barang <=10){
        diskon = (harga*barang) * 0.05;
	total = (harga*barang) - diskon;
        cout << "Mendapatkan diskon sebesar 5%" << endl;
        cout << "Harga yang harus dibayarkan = " << total << endl;
    }
    else if (barang >=11 && barang <=17){
        diskon = (harga*barang) * 0.1;
	total = (harga*barang) - diskon;
        cout << "Mendapatkan diskon sebesar 10%" << endl;
        cout << "Harga yang harus dibayarkan = " << total << endl;
    }
    else if (barang >= 18){
        diskon = (harga*barang) * 0.2;
	total = (harga*barang) - diskon;
        cout << "Mendapatkan diskon sebesar 20%" << endl;
        cout << "Harga yang harus dibayarkan = " << total << endl;
    }
    else {
       total = (harga*barang);
       cout << "Tidak mendapat diskon" << endl;
       cout << "Harga yang harus dibayarkan = " << total << endl;
    }
    return 0;
}
