#include <iostream>

using namespace std;

int main()
{
    cout << "Taliya Meyswara (A11.2022.14163)" << endl;
    cout << "=====================================" << endl;
    int num,first,sec,last,rev;
        cout << "input 3 digits of numbers = " ; cin >> num;
        if (num>=100 && num<=999){
        first = num/100;
        sec = ((num-1)%100)/10;
        last = num%10;
        //smallest
        if (first<sec && first<last){
            cout << first << " is the smallest number" << endl;
        }
        else if (sec<first && sec<last){
            cout << sec << " is the smallest number" << endl;
        }
        else if (last<first && last<sec){
            cout << last << " is the smallest number" << endl;
        }

        //largest
        if (first>sec && first>last){
            cout << first << " is the largest number" << endl;
        }
        else if (sec>first && sec>last){
            cout << sec << " is the largest number" << endl;
        }
        else if (last>first && last>sec){
            cout << last << " is the largest number" << endl;
        }

        //same
        if (first==sec || first==last || sec==first || sec==last || last==first || last==sec){
            cout << "there are the same numbers" << endl;
        }
        }
    else {
        cout << "Your number less or more than 3 digit" << endl;
    }
    return 0;
}
