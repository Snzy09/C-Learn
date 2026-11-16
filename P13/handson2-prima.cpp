// Hands-on 2 (Menengah): Fungsi bool dan Array
// Sub-CPMK 13.1, CPMK0607
//
// Baca n lalu n bilangan. Tulis dua fungsi:
//   bool isPrima(int x)                  // true bila x prima
//   int hitungPrima(int a[], int n)      // banyak bilangan prima di array
// Tampilkan setiap bilangan dengan keterangan "prima" atau "bukan",
// lalu banyak bilangan prima. Masukan uji: 6  2 9 13 1 21 29

#include <iostream>

using namespace std;

// Prototipe fungsi
bool isPrima(int x);
int hitungPrima(int a[], int n);

int main() {
    int n, a[50];
    if (!(cin >> n)) return 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Tampilkan status prima per bilangan
    for (int i = 0; i < n; i++) {
        cout << a[i] << " " << (isPrima(a[i]) ? "prima" : "bukan") << "\n";
    }

    // Tampilkan total bilangan prima
    cout << "Banyak bilangan prima: " << hitungPrima(a, n) << "\n";

    return 0;
}

// Fungsi memeriksa apakah x adalah bilangan prima
bool isPrima(int x) {
    if (x <= 1) return false;
    if (x == 2) return true;
    if (x % 2 == 0) return false;
    for (int i = 3; i * i <= x; i += 2) {
        if (x % i == 0) return false;
    }
    return true;
}

// Fungsi menghitung banyak bilangan prima dalam array a berukuran n
int hitungPrima(int a[], int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        if (isPrima(a[i])) {
            total++;
        }
    }
    return total;
}
