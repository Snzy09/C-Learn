// Hands-on 1 (Dasar): Fungsi Bangun Datar
// Sub-CPMK 13.1, CPMK0607
//
// Lengkapi tiga fungsi, lalu panggil dari main untuk persegi panjang 8 x 5
// dan lingkaran berjari-jari 7.
//   double luasPersegiPanjang(double p, double l)
//   double luasLingkaran(double r)          // pakai 3.14159
//   void garis(int n)                       // tampilkan n tanda '-' lalu endl

#include <iostream>

using namespace std;

// Fungsi void untuk mencetak garis pembatas sebanyak n karakter
void garis(int n) {
    for (int i = 0; i < n; i++) {
        cout << "-";
    }
    cout << endl;
}

// Fungsi menghitung luas persegi panjang (panjang x lebar)
double luasPersegiPanjang(double p, double l) {
    return p * l;
}

// Fungsi menghitung luas lingkaran (pi x r^2) dengan pi = 3.14159
double luasLingkaran(double r) {
    return 3.14159 * r * r;
}

int main() {
    garis(24);
    cout << "Luas persegi panjang: " << luasPersegiPanjang(8, 5) << endl;
    cout << "Luas lingkaran: " << luasLingkaran(7) << endl;
    garis(24);

    return 0;
}
