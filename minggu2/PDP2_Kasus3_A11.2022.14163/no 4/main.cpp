#include <iostream>

using namespace std;

int main()
{
    cout << "Taliya Meyswara - Kasus 3 No 4" << endl;
    float C,F,K,R;

    cout<< "input C : ";cin >> C;

    F = ((9.0/5.0)*C + 32);
    K = (C + 273);
    R = (4.0/5.0*C);

        cout << "Celcius to Fahrenheit" << endl;
    cout << "F = ((9/5)*C + 32) " <<  endl;
    cout << "F = " << F << endl;

        cout << "Celcius to Kelvin" << endl;
    cout << "K = (C + 273)" << endl;
    cout << "K = " << K << endl;

        cout << "Celcius to Reamur" << endl;
    cout << "R = (4/5*C)" << endl;
    cout << "R = " << R << endl;

    return 0;
}
