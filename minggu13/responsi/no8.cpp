#include <iostream>
using namespace std;
int main(){
    int a[4][4]={{1,0,0,0},{0,1,0,0},{0,0,1,0},{0,0,0,1}};
    for (int i=0;i<4;i++){
        for(int j =0;j<4;j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}