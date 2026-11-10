// Hands-on 1 (Dasar): Linear Search
// Sub-CPMK 11.1, CPMK0607
//
// Baca n, n bilangan, lalu bilangan yang dicari x. Dengan linear search,
// tampilkan indeks pertama x atau "tidak ditemukan", beserta banyak
// perbandingan yang dilakukan. Masukan uji dua kasus:
//   6  12 7 30 7 18 4   cari 7
//   6  12 7 30 7 18 4   cari 99

#include <iostream>
using namespace std;

int main() {
    for (int kasus = 0; kasus < 2; kasus++) {
        int n, a[100], x;
        cin >> n;
        for (int i = 0; i < n; i++) cin >> a[i];
        cin >> x;
        int posisi = -1, banding = 0;

        // Linear search, berhenti di kemunculan pertama
        for (int i = 0; i < n; i++) {
            banding++;
            if (a[i] == x) {
                posisi = i;
                break;
            }
        }

        // Tampilkan hasil pencarian dan banyak perbandingan
        if (posisi != -1) {
            cout << x << " ditemukan di indeks " << posisi << endl;
        } else {
            cout << x << " tidak ditemukan" << endl;
        }
        cout << "Perbandingan: " << banding << endl;
    }
    return 0;
}
