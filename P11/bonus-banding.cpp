// Bonus (Pengayaan): Linear vs Binary
// Sub-CPMK 11.1, CPMK0607
//
// Array terurut berisi 1, 3, 5, ..., 199 (100 bilangan ganjil).
// Untuk x = 1, 99, 199, dan 200, hitung banyak perbandingan linear search
// dan binary search. Tampilkan "x: linear L, binary B" per baris.

#include <iostream>
using namespace std;

int main() {
    int a[100];
    for (int i = 0; i < 100; i++) a[i] = 2 * i + 1;
    int uji[4] = {1, 99, 199, 200};

    for (int k = 0; k < 4; k++) {
        int x = uji[k];

        // Linear Search: membandingkan satu per satu dari awal
        int banding_linear = 0;
        for (int i = 0; i < 100; i++) {
            banding_linear++;
            if (a[i] == x) {
                break;
            }
        }

        // Binary Search: membagi dua ruang pencarian setiap iterasi
        int banding_binary = 0;
        int low = 0, high = 99;
        while (low <= high) {
            banding_binary++;
            int mid = (low + high) / 2;
            if (a[mid] == x) {
                break;
            } else if (a[mid] < x) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        cout << x << ": linear " << banding_linear << ", binary " << banding_binary << endl;
    }

    return 0;
}
