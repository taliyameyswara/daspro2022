#include <iostream>
using namespace std;
int main(){
	//Taliya Meyswara A11.2022.14163
	//11 Oktober 2022
	//Program Menampilkan Hasil Bagi dan Sisa Hasil Bagi

	cout << "Program Menampilkan Hasil Bagi dan Sisa Hasil Bagi" << endl;
	
	int num1, num2, hasil1,hasil2;
	
	cout << "Input bilangan pertama = " ; cin >> num1;
	cout << "Input bilangan kedua = " ; cin >> num2;
	
	hasil1 = num1 / num2;
	hasil2 = num1 % num2;
	
	cout << num1 << " mod " << num2 <<  ", maka hasil bagi " << hasil1
	<< " dan sisa hasil bagi " << hasil2 << endl;	

return 0;
}