// Hands-on 2 (Menengah): Statistik Kelas
// Sub-CPMK 9.1, CPMK0607
//
// Baca n lalu n nilai. Tampilkan rata-rata (2 desimal), nilai tertinggi
// beserta indeksnya, dan banyak nilai di atas rata-rata.
// Masukan uji: 6  70 85 60 90 75 80. Lihat expected/handson2-statistik.txt.
// Perhatikan: "di atas rata-rata" butuh rata-rata dulu, baru dibandingkan.
// Inilah alasan data perlu disimpan di array.

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    int a[100];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    double total = 0;
    int maks = a[0];
    int idx_maks = 0;

    for (int i = 0; i < n; i++) {
        total += a[i];
        if (a[i] > maks) {
            maks = a[i];
            idx_maks = i;
        }
    }

    double rata = total / n;

    int diatas_rata = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > rata) {
            diatas_rata++;
        }
    }

    // Tampilkan hasil
    cout << fixed << setprecision(2);
    cout << "Rata-rata: " << rata << endl;
    cout << "Tertinggi: " << maks << " (indeks " << idx_maks << ")" << endl;
    cout << "Di atas rata-rata: " << diatas_rata << endl;

    return 0;
}
