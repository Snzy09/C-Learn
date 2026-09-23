#include <iostream>
using namespace std;
// Nama : M Ikhsan C P
// Nim  : 126140138

int main() {

    int panjang, lebar, luas, keliling;

    cout << "Input Panjang: ";
    cin >> panjang;
    cout << "Input Lebar: ";
    cin >> lebar;

    luas = panjang * lebar;
    keliling = 2 * ( panjang + lebar );
    
    cout << "Luas Persegi panjang: " << luas << endl;
    cout << "Keliling Persegi Panjang: " << keliling << endl;
    cout << "Create By Ikhsan" << endl;
    return 0;
}