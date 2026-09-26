// Nama : M Ikhsan Candra Putra
// NIM  : 126140138

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int angka;

    cout << "──────────────────────────────────────────\n";
    cout << "       PROGRAM JUMLAH & RATA-RATA         \n";
    cout << "──────────────────────────────────────────\n";

    do {
        cout << "Masukkan jumlah angka: ";
        cin >> angka;

        if (angka <= 0) {
            cout << "<!> Validasi Gagal: Nilai n harus > 0!\n";
            cout << "──────────────────────────────────────────\n";
        }
    } while (n <= 0);

    cout << "──────────────────────────────────────────\n";

    double total = 0;
    for (int i = 1; i <= n; i++) {
        double angka;
        cout << "Input angka ke-" << i << " : ";
        cin >> angka;
        total += angka;
    }

    double rataRata = total / n;

    cout << "──────────────────────────────────────────\n";
    cout << "            HASIL PERHITUNGAN             \n";
    cout << "──────────────────────────────────────────\n";
    cout << "Jumlah    : " << total << endl;
    cout << "Rata-rata : " << rataRata << endl;
    cout << "──────────────────────────────────────────\n";
    cout << "Nama      : M Ikhsan Candra Putra\n";
    cout << "NIM       : 126140138\n";
    cout << "──────────────────────────────────────────\n";

    return 0;
}
