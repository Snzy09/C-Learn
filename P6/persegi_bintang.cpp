#include <iostream>
using namespace std;
/*
 * Nama       : M Ikhsan Candra Putra
 * NIM        : 126140138
 * Program    : Persegi Bintang Pattern
 */
int main() {
    int n;
    cout << "────────────────────────────────────\n";
    cout << "Nama       : M Ikhsan Candra Putra\n";
    cout << "NIM        : 126140138\n";
    cout << "────────────────────────────────────\n\n";
    cout << "Masukkan Ukuran Kotak: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
