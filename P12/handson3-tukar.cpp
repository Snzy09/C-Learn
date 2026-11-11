// Hands-on 3 (Tantangan): Perbaiki Bubble Sort
// Sub-CPMK 12.2, CPMK0608
//
// Program seharusnya mengurutkan {5, 1, 4, 2, 8, 3} menjadi 1 2 3 4 5 8.
// Ada tiga kesalahan. Tuliskan isi array sesudah setiap pertukaran pada
// putaran pertama, perbaiki, lalu isi PENJELASAN.
//
// PENJELASAN
// Kesalahan 1: Kondisi loop luar 'i < N - 3' hanya memproses 3 putaran; seharusnya 'i < N - 1'.
// Kesalahan 2: Kondisi 'a[j] < a[j + 1]' mengurutkan menurun; seharusnya 'a[j] > a[j + 1]' untuk urutan naik.
// Kesalahan 3: Penukaran 'a[j] = a[j+1]; a[j+1] = a[j];' menimpa elemen tanpa penampung sementara (swap).

#include <iostream>
#include <utility>

using namespace std;

int main() {
    const int N = 6;
    int a[N] = {5, 1, 4, 2, 8, 3};

    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
            }
        }
    }

    for (int k = 0; k < N; k++) {
        cout << a[k] << (k == N - 1 ? "" : " ");
    }
    cout << "\n";

    return 0;
}
