#include <iostream>
// Nama : M Ikhsan C P
// Nim  : 126140138
using namespace std;

int main() {
    int nilai;

    cout << "Masukkan Nilai : ";
    cin >> nilai;

    if (nilai > 75) {
        cout << "=================\nNilai Anda: " << nilai << "\nStatus : Lulus";
    }
    else if ( nilai < 75) {
        cout << "=================\nNilai Anda: " << nilai << "\nStatus : Tidak Lulus";
    }
    else {
        cout << "Nilai Tidak Valid";
    }
    cout << "\n\nCreate By Ikhsan" << endl;
    return 0;
}