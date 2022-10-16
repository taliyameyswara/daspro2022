#include <iostream>
using namespace std;
int main(){
	//Taliya Meyswara A11.2022.14163
	//11 Oktober 2022
	//no7

	cout << "\t" <<"Program Promo Toko Material KOH YEYE" << endl;
	cout << "====================================================" << endl;
	cout << "Kode hari" << endl;
	cout << "Senin (1)" << endl;
	cout << "Selasa (2)" << endl;
	cout << "Rabu (3)" << endl;
	cout << "Kamis (4)" << endl;
	cout << "Jumat (5)" << endl;
	cout << "Sabtu (6)" << endl;
	cout << "=============================" << endl;
	
	int hari, pembelian, quantity, diskon;
	cout << "Input kode hari = " ; cin >> hari;
	cout << "Input harga = " ; cin >> pembelian;
	cout << "Input quantity = " ; cin >> quantity;
	cout << "=================================" << endl;

	switch (hari) {
	case 1 : cout << "Senin" << endl;
		cout << "Mendapatkan diskon 10%" << endl;
		break;
	case 2 : cout << "Selasa" << endl;
		if (pembelian>100000){
		cout << "Mendapatkan diskon 10%" << endl;
		}
		else {
		cout << "Tidak mendapat diskon" << endl;
		}
		break;
	case 3 : cout << "Rabu" << endl;
		if (pembelian>100000 && quantity>10){
		cout << "Mendapatkan diskon 20%" << endl;
		}
		else {
		cout << "Tidak mendapat diskon" << endl;
		}
		break;
	case 4 : cout << "Kamis" << endl;
		if (quantity > 10) {
		cout << "Mendapat potongan 20.000" << endl;
		}
		else {
		cout << "Mendapat potongan 10.000" << endl;
		}
		break;

	case 5 : cout << "Jumat" << endl;
		if (quantity>=5 && quantity<10) {
		cout << "Mendapat diskon 5%" << endl;
		}
		else if (quantity>=10) {
		cout << "Mendapat diskon 10%" << endl;
		}
		else {
		cout << "Tidak mendapat diskon" << endl;
		}
		break;

	case 6 : cout << "Sabtu" << endl;
		if (quantity<=10) {
		diskon = quantity;
		cout << "Mendapat diskon " << diskon << "%" << endl;
		}
		else {
		cout << "Tidak mendapat diskon" << endl;
		}
		break;
	default : cout << "Kode hari yang anda masukkan tidak valid" << endl;
	}

return 0;
}