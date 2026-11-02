// Hands-on 1 (Dasar): Nilai Kelas Dua Dimensi
// Sub-CPMK 10.1, CPMK0607
//
// Baca nilai 3 mahasiswa x 4 kuis ke array int n[3][4]. Tampilkan tabel
// dengan total per mahasiswa (baris) di kolom terakhir.
// Masukan uji ada di input/handson1-matriks.txt.

#include <iostream>
using namespace std;

int main() {
    int n[3][4];

    // Membaca input dengan perulangan bersarang (baris luar, kolom dalam)
    for (int b = 0; b < 3; b++) {
        for (int k = 0; k < 4; k++) {
            cin >> n[b][k];
        }
    }

    // Menampilkan tabel matriks beserta total setiap baris
    for (int b = 0; b < 3; b++) {
        int total = 0;
        for (int k = 0; k < 4; k++) {
            cout << n[b][k] << " ";
            total += n[b][k];
        }
        cout << "| " << total << endl;
    }

    return 0;
}
