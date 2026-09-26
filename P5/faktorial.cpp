// Nama : M Ikhsan Candra Putra
// NIM  : 126140138

#include <iostream>

using namespace std;

int main() {
    int angka;

    cout << "──────────────────────────────────────────\n";
    cout << "       PROGRAM HITUNG FAKTORIAL           \n";
    cout << "──────────────────────────────────────────\n";

    // Loop 1: Validasi Input (while true)
    while (true) {
        cout << "Masukkan nilai (0 - 12): ";
        cin >> angka;

        if (angka >= 0 && angka <= 12) {
            break;
        }

        cout << "⚠️ Validasi Gagal: Nilai harus rentang 0 - 12!\n";
        cout << "──────────────────────────────────────────\n";
    }

    long long faktorial = 1;

    for (int i = 1; i <= angka; i++) {
        faktorial *= i;
    }

    cout << "──────────────────────────────────────────\n";
    cout << "            HASIL PERHITUNGAN             \n";
    cout << "──────────────────────────────────────────\n";
    cout << angka << "! = " << faktorial << endl;
    cout << "──────────────────────────────────────────\n";
    cout << "Nama : M Ikhsan Candra Putra\n";
    cout << "NIM  : 126140138\n";
    cout << "──────────────────────────────────────────\n";

    return 0;
}
