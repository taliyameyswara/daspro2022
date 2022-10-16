#include<iostream>

using namespace std;

int main()
{
	/*Latihan Ekspresi dan Operator*/
	/*Taliya Meyswara*/
	/*20 September*/
	/*Kasus 2*/
	
	int x,y,hasil1,hasil2,hasil3,hasil4,hasil5,hasil6;
	x = 5;
	y = 3;
 
	//no. 1
	hasil1 = x+=1;
	//no. 2
	hasil2 = x+=y;
	//no. 3
	hasil3 = y-=1;
	//no.4 
	hasil4 = y-=x;
	//no.5
	hasil5 = x*=y+1;
	//no.6
	hasil6 = y/=3;

	cout << "hasil1 = " << hasil1 << endl;
	cout << "hasil2 = " << hasil2 << endl;
	cout << "hasil3 = " << hasil3 << endl;
	cout << "hasil4 = " << hasil4 << endl;
	cout << "hasil5 = " << hasil5 << endl;
	cout << "hasil6 = " << hasil6 << endl;
	
	return 0;
}