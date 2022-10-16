#include <iostream>

using namespace std;

int main(){

cout << "No. 1 Pake IF" << endl;
	int a,b;
	
	cout << "input a = " ; cin >> a;
	cout << "input b = " ; cin >> b;
	
	if (a<b) {
		cout << "true" << endl;
	}
	else if (a>b) {
		cout << "false" << endl;
	}
	else if (a==b) {
		cout << "false" << endl;
	}
	return 0;
}