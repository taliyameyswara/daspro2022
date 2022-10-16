#include <iostream>
using namespace std;
int main(){
	//Taliya Meyswara A11.2022.14163
	//11 Oktober 2022
	//Program Konversi Waktu

	cout << "Program Konversi Waktu" << endl;
	int d, j, m;
	cout << "Input detik  = " ; cin >> d;
	j = d/3600;
	d = d-(3600*j);
	m = d/60;
	d = d-(60*m);
	cout << "Konversinya adalah = "
	<< j << " jam " << m << " menit " << d << " detik " << endl;	

return 0;
}