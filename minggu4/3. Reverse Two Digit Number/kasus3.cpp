#include <iostream>
using namespace std;
int main(){
	//PDP4. Kasus 3
	//Taliya Meyswara 
	//A11.2022.14163 
	//26.09.2022

	cout << "Reverse Two Digit Numbers" << endl;
	
	int num,rem,bil_int,hasil;
	cout << "input two digit number = " ; cin >> num;
	
	if (num>9) 
	if (num<100)
	{
		rem = num % 10;
		bil_int = num / 10;
		hasil = bil_int + (rem*10);
	}
	cout << "reverse number: " << hasil;
	 
	return 0;
}