#include <iostream>

using namespace std;

int main()
{
    //PDP6. Kasus 1
    //Taliya Meyswara A11.2022.14163
    //04 Oktober 2022

    cout << "Program Menampilkan Konversi Nilai dari Input Angka ke Huruf" << endl;
    int nilai;
    cout << "Masukkan nilai = " ; cin >> nilai;
    if (nilai>= 85 && nilai <= 100){
        cout << "Nilai = A" << endl;
    }
    else if (nilai >= 80 && nilai < 85){
        cout << "Nilai = AB" << endl;
    }
    else if (nilai >= 70 && nilai < 80){
        cout << "Nilai = B" << endl;
    }
    else if (nilai >= 65 && nilai < 70){
        cout << "Nilai = BC" << endl;
    }
    else if (nilai >= 60 && nilai < 65){
        cout << "Nilai = C" << endl;
    }
    else if (nilai >= 50 && nilai < 60){
        cout << "Nilai = D" << endl;
    }
    else{
        cout << "Nilai = E" << endl;
    }
    return 0;
}
