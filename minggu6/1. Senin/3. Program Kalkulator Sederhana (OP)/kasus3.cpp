#include <iostream>
using namespace std;
int main(){
	//PDP 7 - Kasus 3 v.2
	//Taliya Meyswara A11.2022.14163
	//menggunakan operator

	cout << "Program Kalkulator Sederhana" << endl;
	cout << "=============================================" << endl;

	float a,b;
	char o;
	cout << "Masukkan dua angka diikuti operator [+-*/]" <<endl;
	cout << "Contoh: 2*2" << endl;

	cout << "=============================================" << endl;

	cout << "Input = " ; cin >> a >> o >> b ;
	
	switch(o){
	case '+': cout << a << "+" << b << " = " << a+b << endl;
		break;
	case '-': cout << a << "-" << b << " = " << a-b << endl;
		break;
	case '*': cout << a << "*" << b << " = " << a*b << endl;
		break;
	case '/': cout << a << "/" << b << " = " << a/b << endl;
		break;
	default: cout << "input tidak valid" << endl;
}
	cout << "=============================================" << endl;
return 0;
}