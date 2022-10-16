#include <iostream>
using namespace std;
int main(){
	//PDP 7 - Kasus 3 v.1
	//Taliya Meyswara A11.2022.14163

	cout << "Program Kalkulator Sederhana" << endl;
	cout << "================================" << endl;
	cout << "1. Tambah" << endl;
	cout << "2. Kurang" << endl;
	cout << "3. Kali" << endl;
	cout << "4. Bagi" << endl;
	cout << "================================" << endl;
	
	int a,b,pil;	
	cout << "Masukkan angka ke-1 = " ; cin >> a;
	cout << "Masukkan angka ke-2 = " ; cin >> b;
	cout << "Masukkan pilihan [1/2/3/4] = " ; cin >> pil;
	
	switch(pil){
	case 1: cout << a << " + " << b << " = " << a+b << endl;
		break;
	case 2: cout << a << " - " << b << " = " << a-b << endl;
		break;
	case 3: cout << a << " * " << b << " = " << a*b << endl;
		break;
	case 4: cout << a << " / " << b << " = " << a/b << endl;
		break;
	default:
		cout << "Maaf, angka yang anda masukkan diluar [1/2/3/4]" << endl;
	}
	cout << "================================" << endl;
return 0;
}
