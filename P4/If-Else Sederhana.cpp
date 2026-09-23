#include <iostream>
// Nama : M Ikhsan C P
// Nim  : 126140138
using namespace std;

int main() {
    int angka1, angka2;
    double nilai;
    
    cout << "Cek Angka Positif / Negatif\n";
    cout << "Masukkan angka pertama: ";
    cin >> angka1;
    if (angka1 > 0) cout << "POSITIF\n\n";
    else if (angka1 < 0) cout << "NEGATIF\n\n";
    else cout << "nol\n\n";

    cout << "Cek Angka Ganjil / Genap\n\n";
    cout << "Masukkan angka kedua: ";
    cin >> angka2;
    if (angka2 % 2 == 0) cout << "GENAP\n\n";
    else cout << "GANJIL\n\n";
    
    cout << "Cek Kelulus ( Nilai Lebih Dari 75 )\n";
    cout << "Masukkan nilai (0-100): ";
    cin >> nilai;
    if (nilai >= 75) cout << "LULUS\n";
    else cout << "TIDAK LULUS\n";
    cout << "Create By Ikhsan" << endl;
    return 0;
}