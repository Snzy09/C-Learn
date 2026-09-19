#include <iostream>
using namespace std;
// Nama : M Ikhsan C P
// Nim  : 126140138

int main() {
    double nilai;

    // Input nilai (0-100)
    cout << "Masukkan nilai (0-100): ";
    cin >> nilai;

    // Konversi nilai ke Peringkat
    if (nilai >= 85)
        cout << "Peringkat: A" << endl;
    else if (nilai >= 70)
        cout << "Peringkat: B" << endl;
    else if (nilai >= 55)
        cout << "Peringkat: C" << endl;
    else if (nilai >= 40)
        cout << "Peringkat: D" << endl;
    else
        cout << "Peringkat: E" << endl;

    cout << "\nCreate By Ikhsan" << endl;
    return 0;
}
