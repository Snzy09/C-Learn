#include <iostream>
using namespace std;
// Nama : M Ikhsan C P
// Nim  : 126140138

int main() {
    long total_belanja;

    cout << "Masukkan total belanja: Rp ";
    cin >> total_belanja;

    long diskon = 0;
    if (total_belanja >= 500000) {
        diskon = total_belanja * 0.15;
    } else if (total_belanja >= 200000) {
        diskon = total_belanja * 0.10;
    } else if (total_belanja >= 100000) {
        diskon = total_belanja * 0.05;
    }

    long total_setelah = total_belanja - diskon;
    
    cout << "===================================" << endl;
    cout << "Total sebelum diskon\t: Rp " << total_belanja << endl;
    cout << "Diskon              \t: Rp " << diskon << endl;
    cout << "Total setelah diskon\t: Rp " << total_setelah << endl;
    cout << "===================================" << endl;

    cout << "\nCreate By Ikhsan" << endl;
    return 0;
}
