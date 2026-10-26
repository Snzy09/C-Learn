// Hands-on 1 (Dasar): Simpan dan Tampilkan
// Sub-CPMK 9.1, CPMK0607
//
// Baca n (maks 50) lalu n nilai ke dalam array. Tampilkan nilai dengan
// indeksnya, lalu tampilkan dalam urutan terbalik.
// Masukan uji: 5  78 92 65 88 71. Lihat expected/handson1-nilai.txt.

#include <iostream>
using namespace std;

int main() {
    int n;
    int nilai[50];
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> nilai[i];
    }

    for (int i = 0; i < n; i++) {
        cout << "nilai[" << i << "] = " << nilai[i] << endl;
    }

    cout << "Terbalik:";
    for (int i = n - 1; i >= 0; i--) {
        cout << " " << nilai[i];
    }
    cout << endl;

    return 0;
}
