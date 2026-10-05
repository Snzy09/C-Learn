#include <iostream>
using namespace std;
/*
 * Nama       : M Ikhsan Candra Putra
 * NIM        : 126140138
 * Program    : Floyd's Triangle Pattern
 */
int main() {
    int n, num = 1;
    cout << "────────────────────────────────────\n";
    cout << "Nama       : M Ikhsan Candra Putra\n";
    cout << "NIM        : 126140138\n";
    cout << "────────────────────────────────────\n\n";
    cout << "Masukkan Ukuran Segitiga: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }

    return 0;
}
