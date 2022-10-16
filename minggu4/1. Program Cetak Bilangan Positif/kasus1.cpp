#include <iostream>

using namespace std;

int main()
{
	//PDP4. Kasus 1
	//Taliya Meyswara 
	//A11.2022.14163 
	//26.09.2022

	cout << "Program Cetak Bilangan Positif" << endl;

	int number, x;
	cout << "Input number : " ; cin >> number;

	if (number < 0) {
		number = number*1;
	}
	cout << number << " adalah negatif" << endl;

	cout << "ketik -1 untuk mjd positif = "; cin >> x;
	
	if (x < 0) {
		x = number * (-1);
	}
	cout << x << " adalah bilangan positif" << endl;
	
	return 0;
}
	