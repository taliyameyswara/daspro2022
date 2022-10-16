#include <iostream>

using namespace std;

int main(){	

	//PDP 7 - Kasus 1
	//Taliya Meyswara A11.2022.14163

	cout << "Program menampilkan nama-nama hari" << endl;
	
	int angka;
	cout << "Masukkan angka (1-7) = " ; cin >> angka;
	
	switch(angka){
	case 1: cout << "Senin" << endl;
		break;
	case 2: cout << "Selasa" << endl;
		break;
	case 3: cout << "Rabu" << endl;
		break;
	case 4: cout << "Kamis" << endl;
		break;
	case 5: cout << "Jumat" << endl;
		break;
	case 6: cout << "Sabtu" << endl;
		break;
	case 7: cout << "Minggu" << endl;
		break;
	default:
		cout <<"Maaf, angka yang Anda masukkan diluar 1-7." << endl;
	}
	cout << "Terima kasih" << endl;
	return 0;
}