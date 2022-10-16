#include <iostream>

using namespace std;

int main()
{
    cout << "Taliya Meyswara - Kasus 3 No 3" << endl;
    int a,b,c,d,e, penjumlahan, ratarata;

    cout<< "input a: ";cin >> a;
    cout<< "input b: ";cin >> b;
    cout<< "input c: ";cin >> c;
    cout<< "input d: ";cin >> d;
    cout<< "input e: ";cin >> e;

    penjumlahan = (a+b+c+d+e);
    cout << "hasil penjumlahan = a+b+c+d+e" <<  endl;
    cout << "hasil penjumlahan = " << penjumlahan << endl;

    ratarata = (a+b+c+d+e)/5;
     cout << "rata-rata = (a+b+c+d+e)/5" <<  endl;
    cout << "rata-rata = " << ratarata << endl;
    return 0;
}
