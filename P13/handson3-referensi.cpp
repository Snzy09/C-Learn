// Hands-on 3 (Tantangan): Perbaiki Fungsi
// Sub-CPMK 13.2, CPMK0608
//
// Program memakai tiga fungsi: tukar dua nilai, menghitung rata-rata array,
// dan membatasi nilai ke rentang 0-100. Keluaran yang benar:
//   Sesudah tukar: 9 4
//   Rata-rata: 77.5
//   Dibatasi: 0 100 65
// Ada tiga kesalahan (satu memunculkan peringatan). Telusuri nilai parameter
// dan variabel di setiap pemanggilan, perbaiki, lalu isi PENJELASAN.
//
// PENJELASAN
// Kesalahan 1: Fungsi tukar menggunakan pass by value (int x, int y) sehingga
//              hanya menukar salinan lokal; perlu menggunakan pass by reference
//              (int &x, int &y) agar variabel pemanggil ikut tertukar nilainya.
// Kesalahan 2: Pada fungsi rataRata, pembagian total / n merupakan pembagian bulat
//              (integer division) karena kedua operand bertipe int; harus di-cast
//              ke double (misal (double)total / n) agar menghasilkan nilai desimal 77.5.
// Kesalahan 3: Fungsi batasi tidak memiliki pernyataan return untuk nilai di dalam
//              rentang 0 <= nilai <= 100, menyebabkan undefined behavior dan warning
//              compiler; perlu ditambahkan 'return nilai;' di akhir fungsi.

#include <iostream>

using namespace std;

// Diperbaiki: Menggunakan pass by reference (&) agar variabel asli tertukar
void tukar(int &x, int &y) {
    int t = x;
    x = y;
    y = t;
}

// Diperbaiki: Cast total ke double sebelum pembagian agar menghasilkan desimal
double rataRata(int a[], int n) {
    int total = 0;
    for (int i = 0; i < n; i++) total += a[i];
    return static_cast<double>(total) / n;
}

// Diperbaiki: Menambahkan return nilai untuk menangani angka dalam rentang [0, 100]
int batasi(int nilai) {
    if (nilai < 0) return 0;
    if (nilai > 100) return 100;
    return nilai;
}

int main() {
    int p = 4, q = 9;
    tukar(p, q);
    cout << "Sesudah tukar: " << p << " " << q << endl;

    int data[4] = {70, 85, 60, 95};
    cout << "Rata-rata: " << rataRata(data, 4) << endl;

    cout << "Dibatasi: " << batasi(-5) << " " << batasi(120) << " " << batasi(65) << endl;

    return 0;
}
