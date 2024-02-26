// PertemuanPertamaKelasB.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

 int main()
{//begin
    // numeric nPanjang, nLebar, nLuas
    // display 'masukkan panjang = '
    // accept nPanjang
    // display  'masukkan Lebar = '
    // accept nLebar
    // compute nLuas = nPanjang * nLebar
    // display 'Luasnya adalah = ' + nLuas

    int nPanjang, nLebar, nLuas;
    cout << "Masukkan Panjang = ";
    cin >> nPanjang;
    cout << "masukkan Lebar = ";
    cin >> nLebar;
    nLuas = nPanjang * nLebar;
    cout << "Luasnya adalah " << nLuas << endl;
}//end

