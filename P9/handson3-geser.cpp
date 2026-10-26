// Hands-on 3 (Tantangan): Perbaiki Rotasi Array
// Sub-CPMK 9.2, CPMK0608
//
// Program merotasi array ke kanan satu langkah: elemen terakhir pindah ke
// depan. Untuk {10, 20, 30, 40, 50} hasilnya {50, 10, 20, 30, 40}.
// Program punya tiga kesalahan indeks. Gambar isi array sesudah setiap
// putaran (seperti trace table), perbaiki, lalu isi PENJELASAN.
//
// PENJELASAN
// Kesalahan 1: `int simpan = a[N];` mengakses indeks di luar batas array (out of bounds). Indeks elemen terakhir yang benar adalah `N - 1`, sehingga seharusnya `int simpan = a[N - 1];`.
// Kesalahan 2: Perulangan `for (int i = 0; i < N - 1; i++) { a[i + 1] = a[i]; }` menggeser elemen dari kiri ke kanan, sehingga nilai `a[0]` (10) menimpa semua elemen berikutnya menjadi `{10, 10, 10, 10, 10}`. Pergeseran ke kanan harus dilakukan mundur dari belakang: `for (int i = N - 1; i > 0; i--) { a[i] = a[i - 1]; }`.
// Kesalahan 3: `a[1] = simpan;` menaruh elemen terakhir ke indeks ke-1 (posisi kedua). Elemen pertama berada di indeks ke-0, sehingga seharusnya `a[0] = simpan;`.

#include <iostream>
using namespace std;

int main() {
    const int N = 5;
    int a[N] = {10, 20, 30, 40, 50};
    
    int simpan = a[N - 1];
    
    for (int i = N - 1; i > 0; i--) {
        a[i] = a[i - 1];
    }
    
    a[0] = simpan;
    
    for (int i = 0; i < N; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
