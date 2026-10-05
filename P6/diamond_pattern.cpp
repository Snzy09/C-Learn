#include <iostream>
using namespace std;
/*
 * Nama       : M Ikhsan Candra Putra
 * NIM        : 126140138
 * Program    : Diamond Pattern
 */
int main() {
    int n;
    cout << "────────────────────────────────────\n";
    cout << "Nama       : M Ikhsan Candra Putra\n";
    cout << "NIM        : 126140138\n";
    cout << "────────────────────────────────────\n\n";
    cout << "Masukkan Ukuran Diamond: ";
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        for (int s = 1; s <= n - i; s++) {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    // lower part of the diamond
    for (int i = n - 1; i >= 1; i--) {
        for (int s = 1; s <= n - i; s++) {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
