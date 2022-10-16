#include <iostream>
using namespace std;
int main(){
	//Taliya Meyswara A11.2022.14163
	//11 Oktober 2022
	//Program Cetak Positif

	cout << "Program cetak positif" << endl;
	
	int a;
	
	cout << "Input a = " ; cin >> a;
	
	if (a>0){
	cout << "Bilangan positif = " << a << endl;	
	}

	else if (a<0) {
	cout  << "Bilangan positif = " << (a*(-1));
	}
	else {
	cout << "Bilangan positif = " << a*1 << endl;
	}

return 0;
}