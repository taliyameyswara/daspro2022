#include <iostream>
using namespace std;
int main(){
	//Taliya Meyswara A11.2022.14163
	//11 Oktober 2022
	//Program membalik 3 digit nilai interger

	cout << "Program membalik 3 digit nilai interger" << endl;
	
	int num, first, middle, last,result;
	cout << "input 3 number = " ; cin >> num;
	first = num%10;
	middle = ((num-first)%100)/10;
	last = (num-((middle*10)+first))/100;
	result = (first*100)+(10*middle)+last;
	
	cout << "result = " << result << endl;
	
	

return 0;
}