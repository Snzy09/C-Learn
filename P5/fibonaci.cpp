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

    do {
        cout << "Masukkan jumlah suku (n): ";
        cin >> n;
        if (n <= 0) {
            cout << "Nilai n harus lebih besar dari 0. Silakan coba lagi.\n";
        }
    } while (n <= 0);

    cout << "────────────────────────────────────\n";
    cout << "Deret Fibonacci (" << n << " suku): ";

    long long f0 = 0, f1 = 1;

    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            cout << f0 << " ";
        } else if (i == 2) {
            cout << f1 << " ";
        } else {
            long long fn = f0 + f1;
            cout << fn << " ";
            f0 = f1;
            f1 = fn;
        }
    }

    cout << "\n────────────────────────────────────\n";

    return 0;
}
