// Hands-on 3 (Tantangan): Perbaiki Transpos dan Diagonal
// Sub-CPMK 10.2, CPMK0608
//
// Untuk matriks 3x3, program seharusnya menampilkan transposnya lalu jumlah
// diagonal utama. Untuk {{1,2,3},{4,5,6},{7,8,9}}: transpos 1 4 7 / 2 5 8 /
// 3 6 9, diagonal 15. Ada tiga kesalahan. Tulis indeks [b][k] yang dibaca
// pada setiap langkah, perbaiki, lalu isi PENJELASAN.
//
// TABEL PENELUSURAN INDEKS [b][k] YANG DIBACA:
//
// 1. Pada Kode Asal (Salah):
//    - Perulangan Transpos membaca:
//      b=0: [0][0]=1, [0][1]=2, [0][2]=3
//      b=1: [1][0]=4, [1][1]=5, [1][2]=6
//      b=2: [2][0]=7, [2][1]=8, [2][2]=9
//      -> Mengakses m[b][k] mencetak matriks asli tanpa transpos dan tanpa baris baru.
//    - Perulangan Diagonal membaca:
//      i=0: [0][2] = 3
//      i=1: [1][1] = 5
//      i=2: [2][0] = 7
//      -> Mengakses m[i][2-i] yang merupakan diagonal sekunder (anti-diagonal), bukan diagonal utama.
//      -> Output mencetak `diag + m[1][1]` = 15 + 5 = 20 (menambahkan elemen tengah dua kali).
//
// 2. Pada Kode Perbaikan (Benar):
//    - Perulangan Transpos membaca (menukar indeks baris dan kolom m[k][b]):
//      Baris transpos 0 (b=0): k=0 -> [0][0]=1, k=1 -> [1][0]=4, k=2 -> [2][0]=7
//      Baris transpos 1 (b=1): k=0 -> [0][1]=2, k=1 -> [1][1]=5, k=2 -> [2][1]=8
//      Baris transpos 2 (b=2): k=0 -> [0][2]=3, k=1 -> [1][2]=6, k=2 -> [2][2]=9
//    - Perulangan Diagonal membaca diagonal utama (m[i][i]):
//      i=0: [0][0] = 1
//      i=1: [1][1] = 5
//      i=2: [2][2] = 9
//      Total = 1 + 5 + 9 = 15
//
// PENJELASAN
// Kesalahan 1: Pada perulangan transpos, kode mengakses `m[b][k]` sehingga hanya mencetak matriks dalam urutan aslinya. Untuk menghasilkan transpos (baris menjadi kolom), indeks baris dan kolom harus dibalik menjadi `m[k][b]`, dan ditambahkan `cout << endl;` di akhir setiap baris transpos.
// Kesalahan 2: Perulangan akumulasi diagonal mengakses `m[i][2 - i]` yang menelusuri diagonal sekunder (anti-diagonal). Elemen diagonal utama selalu memiliki indeks baris dan kolom yang identik, sehingga seharusnya mengakses `m[i][i]`.
// Kesalahan 3: Pada baris keluaran `cout << "Diagonal: " << diag + m[1][1] << endl;`, elemen tengah `m[1][1]` ditambahkan untuk kedua kalinya. Karena perulangan sudah menghitung seluruh elemen diagonal utama, nilai `diag` sudah bernilai 15, sehingga cukup mencetak `diag`.

#include <iostream>
using namespace std;

int main() {
    int m[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // Menampilkan matriks transpos baris per baris
    for (int b = 0; b < 3; b++) {
        for (int k = 0; k < 3; k++) {
            cout << m[k][b] << " ";
        }
        cout << endl;
    }

    // Menghitung jumlah diagonal utama
    int diag = 0;
    for (int i = 0; i < 3; i++) {
        diag += m[i][i];
    }

    cout << "Diagonal: " << diag << endl;

    return 0;
}
