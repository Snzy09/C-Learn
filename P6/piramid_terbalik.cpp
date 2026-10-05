#include <iostream>
using namespace std;
/*
 * Nama       : M Ikhsan Candra Putra
 * NIM        : 126140138
 * Program    : Piramid Terbalik Pattern
 */
int main() {
    int n;
    cout << "────────────────────────────────────\n";
    cout << "Nama       : M Ikhsan Candra Putra\n";
    cout << "NIM        : 126140138\n";
    cout << "────────────────────────────────────\n\n";
    cout << "Masukkan Ukuran Piramid: ";
    cin >> n;
    
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";  
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
