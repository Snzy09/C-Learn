// Hands-on 2 (Menengah): Cari Nama di Daftar Hadir
// Sub-CPMK 11.1, CPMK0607
//
// Daftar hadir berisi n nama (satu kata per nama). Baca kata kunci, lalu
// tampilkan SEMUA posisi (mulai 1) nama yang sama persis dengan kunci, dan
// banyaknya. Bila tidak ada, tampilkan "Tidak ada".
// Masukan uji: 7  Rani Budi Siti Rani Andi Rani Doni   kunci Rani

#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string nama[50], kunci;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> nama[i];
    cin >> kunci;

    int banyak = 0;
    // Linear search tanpa break untuk menemukan semua kemunculan (1-based index)
    for (int i = 0; i < n; i++) {
        if (nama[i] == kunci) {
            cout << "posisi " << i + 1 << endl;
            banyak++;
        }
    }

    if (banyak == 0) {
        cout << "Tidak ada" << endl;
    } else {
        cout << "muncul " << banyak << " kali" << endl;
    }

    return 0;
}
