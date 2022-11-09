#include <iostream>
using namespace std;
int main(){
	//Taliya Meyswara A11.2022.14163
	//11 Oktober 2022
	//no7

	cout << "Program Pembelian Take Away atau Dine In" << endl;
	cout << "======================================================" << endl;
	
	int pil,harga,hasil,ppn,diskon;

	cout << "Input harga = " ; cin >> harga;

	cout << "Pilih take away/dine in" << endl;
	cout << "Ketik 1 untuk take away, 2 untuk dine in = " ; cin >> pil;
	
	cout << "=====================================================" << endl;

	switch (pil){
	case 1 :
	cout << "Take away" << endl;
	if (harga > 100000){
	cout << "Pembelian Anda diatas 100.000, Anda berhak mendapat diskon 10% " << endl;
	diskon = harga * 0.1;
	ppn = harga*0.11;
	hasil = harga + (harga*0.11) - diskon;
	cout << "Harga + PPN - Diskon" << endl;
	cout << harga << " + " << ppn << " - " << diskon << " = " << hasil << endl;
	}
	else { 
	cout << "Tidak mendapat diskon, pembelian kurang dari 100.000" << endl;
	ppn = harga*0.11;
	cout << "Harga + PPN" << endl;
	hasil = harga + ppn ;
	cout << harga << " + " << ppn << " = " << hasil << endl;
	}
	
		break;
	case 2:
	cout << "Dine in" << endl;
	cout << "Pembelian dine in mendapatkan diskon 15%" << endl;
	ppn = harga*0.11;
	diskon = harga*0.15;
	hasil = harga + ppn - diskon;
	cout << "Harga + PPN - Diskon" << endl;
	cout << harga << " + " << ppn << " - " << diskon << " = " << hasil << endl;

		break;
	default:
	cout << "Input yg anda masukkan tidak valid" << endl;
	}
	

return 0;
}