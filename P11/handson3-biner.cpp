// Hands-on 3 (Tantangan): Perbaiki Binary Search
// Sub-CPMK 11.2, CPMK0608
//
// Array sudah terurut naik: 3 8 15 21 34 42 57 66 79 90 (indeks 0-9).
// Program mencari 90, 21, dan 50. Hasil benar:
//   90 -> indeks 9, 21 -> indeks 3, 50 -> tidak ditemukan
// Ada tiga kesalahan. Buat trace table (low, high, mid, a[mid]) untuk
// pencarian 90 dan 21, perbaiki, lalu isi PENJELASAN.
//
// TRACE TABLE PENCARIAN 90 (x = 90):
// Langkah | low | high | mid | a[mid] | Keputusan
// 1       | 0   | 9    | 4   | 34     | 34 < 90, cari di kanan: low = mid + 1 = 5
// 2       | 5   | 9    | 7   | 66     | 66 < 90, cari di kanan: low = mid + 1 = 8
// 3       | 8   | 9    | 8   | 79     | 79 < 90, cari di kanan: low = mid + 1 = 9
// 4       | 9   | 9    | 9   | 90     | 90 == 90, ditemukan di indeks 9
//
// TRACE TABLE PENCARIAN 21 (x = 21):
// Langkah | low | high | mid | a[mid] | Keputusan
// 1       | 0   | 9    | 4   | 34     | 34 > 21, cari di kiri: high = mid - 1 = 3
// 2       | 0   | 3    | 1   | 8      | 8 < 21, cari di kanan: low = mid + 1 = 2
// 3       | 2   | 3    | 2   | 15     | 15 < 21, cari di kanan: low = mid + 1 = 3
// 4       | 3   | 3    | 3   | 21     | 21 == 21, ditemukan di indeks 3
//
// PENJELASAN
// Kesalahan 1: Syarat perulangan while (low < high) salah. Seharusnya while (low <= high).
//              Bila hanya menggunakan operator '<', saat rentang menyempit hingga low == high,
//              elemen terakhir tersebut tidak sempat diperiksa (misalnya saat mencari 90 di indeks 9).
// Kesalahan 2: Arah pergeseran batas pencarian terbalik pada percabangan if-else.
//              Ketika a[mid] < x (nilai tengah lebih kecil dari nilai yang dicari), nilai yang dicari
//              berada di bagian kanan array, sehingga batas bawah harus digeser: low = mid + 1 (bukan high = mid - 1).
//              Sebaliknya, ketika a[mid] > x, batas atas harus digeser: high = mid - 1 (bukan low = mid + 1).
// Kesalahan 3: Penetapan indeks saat nilai ditemukan menggunakan posisi = mid + 1.
//              Karena array pada C++ berbasis indeks 0 (0-indexed, indeks 0 sampai N-1),
//              seharusnya posisi = mid agar indeks kemunculan sesuai dengan indeks array yang sebenarnya.

#include <iostream>
using namespace std;

int main() {
    const int N = 10;
    int a[N] = {3, 8, 15, 21, 34, 42, 57, 66, 79, 90};
    int cari[3] = {90, 21, 50};
    for (int k = 0; k < 3; k++) {
        int x = cari[k], low = 0, high = N - 1, posisi = -1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (a[mid] == x) {
                posisi = mid;
                break;
            } else if (a[mid] < x) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        if (posisi != -1) cout << x << " -> indeks " << posisi << endl;
        else cout << x << " -> tidak ditemukan" << endl;
    }
    return 0;
}
