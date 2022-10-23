#include <iostream>
using namespace std;
int main(){
    //Taliya Meyswara
    //A11.2022.14163
    //Program yang menerima 2 input bilangan integer positif

    int num1,num2;
    cout << "Input first number = " ; cin >> num1;
    cout << "Input second number = " ; cin >> num2;

        if (num1){
            if (num1>0){
            cout << "First number is positive" << endl;
            }
            else {
            cout << "First number is negative" << endl;
            }
        }
        if (num2){
            if (num2>0){
            cout << "Second number is positive" << endl;
            }
            else {
            cout << "Second number is negative" << endl;
            }
        }
return 0;
}
