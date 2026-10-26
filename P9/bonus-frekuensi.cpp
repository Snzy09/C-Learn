// Bonus (Pengayaan): Frekuensi Nilai Huruf
// Sub-CPMK 9.1, CPMK0607
//
// Baca n lalu n nilai (0-100). Hitung frekuensi tiap rentang dengan array
// frek[5] untuk rentang 0-19, 20-39, 40-59, 60-79, 80-100, lalu tampilkan
// histogram bintang. Masukan uji: 8  15 45 62 78 81 95 55 70
// Petunjuk: indeks rentang = nilai / 20, kecuali 100 masuk indeks 4.

#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, frek[5] = {0};
    cin >> n;

    for (int i = 0; i < n; i++) {
        int nilai;
        cin >> nilai;
        
        int idx = nilai / 20;
        if (idx > 4) { 
            idx = 4;
        }
        frek[idx]++;
    }
  
    string label[5] = {"0-19  ", "20-39 ", "40-59 ", "60-79 ", "80-100"};
  
    for (int i = 0; i < 5; i++) {
        cout << label[i] << ": ";
        for (int j = 0; j < frek[i]; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
