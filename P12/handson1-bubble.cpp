// Hands-on 1 (Dasar): Bubble Sort dengan Jejak
// Sub-CPMK 12.1, CPMK0607
//
// Baca n lalu n bilangan. Urutkan naik dengan bubble sort, dan tampilkan
// isi array sesudah SETIAP putaran (pass) luar.
// Masukan uji: 5  29 10 14 37 13

#include <iostream>
#include <utility>

using namespace std;

int main() {
    int n, a[100];
    if (!(cin >> n)) return 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
            }
        }
        cout << "Putaran " << i + 1 << ":";
        for (int k = 0; k < n; k++) {
            cout << " " << a[k];
        }
        cout << "\n";
    }

    return 0;
}
