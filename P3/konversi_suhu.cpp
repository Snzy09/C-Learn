#include <iostream>
using namespace std;
// Nama : M Ikhsan C P
// Nim  : 126140138

int main() {

    float celcius;

    cout << "Input suhu dalam celcius: ";
    cin >> celcius;

    float fahrenheit = (celcius*9.0/5.0) + 32;
    float kelvin = celcius + 273.15;

    cout << "======= Konversi Suhu =======" << endl;
    cout << "Fahrenheit:\t" << fahrenheit << endl;
    cout << "Kelvin:\t" << kelvin << endl;
    cout << "=============================" << endl;
    cout << "Create By Ikhsan" << endl;
    return 0;
}