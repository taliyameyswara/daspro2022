#include <iostream>

using namespace std;

int main()
{
    cout << "PDP10 - Kasus 4" << endl;
    cout << "Program menampilkan bilangan 1 - 50 yang habis dibagi 5 (bilangan kelipatan 5)." << endl;
    int i,n;
    n=50;
    i=5;
    while (i<=n){
    cout << i << " ";
    i=i+5;
    }
    return 0;
}
