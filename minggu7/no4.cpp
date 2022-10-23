#include <iostream>

using namespace std;

int main()
{
    cout << "Taliya Meyswara (A11.2022.14163)" << endl;
    cout << "=====================================" << endl;
    int num,first,sec,last,rev;
    cout << "Input 3 digit number = " ; cin >> num;
    if (num>=100 && num<=999){
        cout << "Your number is positive" << endl;
        if (num%2==0){
            cout << "Your number is even" << endl;
        }
        else {
            cout << "Your number is odd" << endl;
        }
        //145/100 = 1
        //145%10= (145-1)%100/10 = 4
        //145%10 = 5
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

        rev=(last*100)+(sec*10)+first;
        //reverse number
        cout << "Reversed number = " << rev << endl;

    }
    else {
        cout << "Your number less or more than 3 digit" << endl;
    }
    return 0;
}
