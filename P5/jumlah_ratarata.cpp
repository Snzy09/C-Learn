/*
 * Nama       : M Ikhsan Candra Putra
 * NIM        : 126140138
 */

#include <iostream>
using namespace std;

int main() {
    cout << "────────────────────────────────────\n";
    cout << "Nama       : M Ikhsan Candra Putra\n";
    cout << "NIM        : 126140138\n";
    cout << "────────────────────────────────────\n\n";

    int n;

    // Validasi input: n harus > 0
    do {
        cout << "Masukkan nilai n: ";
        cin >> n;
        if (n <= 0) {
            cout << "Nilai n harus lebih besar dari 0. Silakan coba lagi.\n";
        }
    } while (n <= 0);

    double total = 0.0;
    double angka;

    cout << "────────────────────────────────────\n";
    
    for (int i = 1; i <= n; i++) {
        cout << "Masukkan angka ke-" << i << ": ";
        cin >> angka;
        total += angka;
    }

    double rata_rata = total / n;

    cout << "────────────────────────────────────\n";
    cout << "Jumlah    = " << total << endl;
    cout << "Rata-rata = " << rata_rata << endl;
    cout << "────────────────────────────────────\n";

    return 0;
}
