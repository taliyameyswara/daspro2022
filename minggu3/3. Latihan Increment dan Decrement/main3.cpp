#include<iostream>

using namespace std;

int main()
{
	/*Latihan Ekspresi dan Operator*/
	/*Taliya Meyswara*/
	/*20 September*/
	/*Kasus 3*/
	
	int x,y,hasil1,hasil1_2,hasil2,hasil2_2,hasil3,hasil3_2,hasil4,hasil4_2;
	x = 5;
	y = 3;
 
	//no. 1
	hasil1 = x++;
	hasil1_2= ++x;

	//no. 2
	hasil2 = y++;
	hasil2_2= ++y;

	//no. 3
	hasil3 = x--;
	hasil3_2 = --x;

	//no.4 
	hasil4 = y--;
	hasil4_2 = --y;

	cout << "hasil1 = " << hasil1 << endl;
	cout << "hasil1_2 = " << hasil1_2 << endl;

	cout << "hasil2 = " << hasil2 << endl;
	cout << "hasil2_2 = " << hasil2_2 << endl;

	cout << "hasil3 = " << hasil3 << endl;
	cout << "hasil3_2 = " << hasil3_2 << endl;

	cout << "hasil4 = " << hasil4 << endl;
	cout << "hasil4_2 = " << hasil4_2 << endl;

	return 0;
}