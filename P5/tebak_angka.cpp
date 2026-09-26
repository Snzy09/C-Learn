// Nama : M Ikhsan Candra Putra
// NIM  : 126140138

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Inisialisasi pembuat angka acak
    srand(time(0));
    
    // Komputer memilih angka rahasia acak antara 1 sampai 10
    int angkaRahasia = rand() % 10 + 1;
    int tebakan;
    int percobaan = 0;

    cout << "──────────────────────────────────────────\n";
    cout << "       PERMAINAN TEBAK ANGKA (1-10)       \n";
    cout << "──────────────────────────────────────────\n";

    do {
        cout << "Masukkan tebakan Anda : ";
        cin >> tebakan;
        percobaan++;

        if (tebakan < angkaRahasia) {
            cout << "Terlalu kecil!\n";
            cout << "──────────────────────────────────────────\n";
        } else if (tebakan > angkaRahasia) {
            cout << "Terlalu besar!\n";
            cout << "──────────────────────────────────────────\n";
        } else {
            cout << "BENAR!\n";
        }
    } while (tebakan != angkaRahasia);

    cout << "──────────────────────────────────────────\n";
    cout << "            HASIL PERMAINAN               \n";
    cout << "──────────────────────────────────────────\n";
    cout << "Jumlah Percobaan : " << percobaan << " kali\n";
    cout << "──────────────────────────────────────────\n";
    cout << "Nama : M Ikhsan Candra Putra\n";
    cout << "NIM  : 126140138\n";
    cout << "──────────────────────────────────────────\n";

    return 0;
}
