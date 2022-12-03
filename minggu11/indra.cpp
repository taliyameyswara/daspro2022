#include <iostream>

using namespace std;

int main()
{
    int i,j,k,n;
    for(i=1; i<=3; i++){
        for(j=1; j<=i; j++){
            for(k=1;k<=i;k++){
                cout << i ;
            }
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}
