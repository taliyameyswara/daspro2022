#include <iostream>

using namespace std;

int main()
{
    cout << "PDP10 - Kasus 5" << endl;
    cout << "program menampilkan bilangan 50 – 101 dengan ketentuan bilangan tersebut habis dibagi 5 atau habis dibagi 7. " << endl;
    int i,n;
    i=50;
    n=101;
    while (i<n){
        if(i%5==0){
            cout << i << " ";
        }
        if(i%7==0){
            cout << i << " ";
        }
     i++;
    }
    return 0;
}
