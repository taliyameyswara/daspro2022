#include <iostream>
using namespace std;
int main ()
{
	//taliya meyswara

	cout << "Program Hitung Upah Lembur Karyawan" << endl;

	int totalreg, jamreg, upahreg;

	//upah regular
		cout << "input jam kerja reguler = " ; cin >> jamreg;
		cout << "input upah reguler = " ; cin >> upahreg;
		totalreg = jamreg * upahreg;
		cout << "total upah reguler = " << totalreg <<endl;
	
	//syarat lembur/overtime: >40, maka lembur	
	//upah lembur

	int upahlembur;
	upahlembur = 0;
		if (jamreg>40)
		{
			upahlembur =(jamreg - 40)*(upahreg*0.3);
			
		}
			cout << "upah lembur = " << upahlembur << endl;

	//total upah
	int totalupah;
		totalupah = totalreg + upahlembur;
	cout << "total upah = " << totalupah;
	
	return 0;
}