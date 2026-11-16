// Bonus (Pengayaan): Pustaka Statistik Kecil
// Sub-CPMK 13.1, CPMK0607
//
// Tulis fungsi minimum, maksimum, rataRata (double), dan
// void urutkan(int a[], int n) (bubble sort naik). Baca n lalu n bilangan,
// tampilkan keempat hasil. Masukan uji: 7  12 5 30 8 21 5 17

#include <iostream>
#include <utility>

using namespace std;

// Fungsi mencari nilai minimum dalam array
int minimum(const int a[], int n) {
    int minVal = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] < minVal) {
            minVal = a[i];
        }
    }
    return minVal;
}

// Fungsi mencari nilai maksimum dalam array
int maksimum(const int a[], int n) {
    int maxVal = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > maxVal) {
            maxVal = a[i];
        }
    }
    return maxVal;
}

// Fungsi menghitung nilai rata-rata elemen array dalam bentuk desimal (double)
double rataRata(const int a[], int n) {
    double total = 0;
    for (int i = 0; i < n; i++) {
        total += a[i];
    }
    return total / n;
}

// Fungsi mengurutkan array secara menaik (ascending) menggunakan Bubble Sort
void urutkan(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
            }
        }
    }
}

int main() {
    int n, a[100];
    if (!(cin >> n)) return 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Minimum: " << minimum(a, n) << "\n";
    cout << "Maksimum: " << maksimum(a, n) << "\n";
    cout << "Rata-rata: " << rataRata(a, n) << "\n";

    urutkan(a, n);
    cout << "Terurut:";
    for (int i = 0; i < n; i++) {
        cout << " " << a[i];
    }
    cout << "\n";

    return 0;
}
