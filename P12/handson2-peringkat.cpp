// Hands-on 2 (Menengah): Peringkat dengan Selection Sort
// Sub-CPMK 12.1, CPMK0607
//
// Baca n peserta: nama (satu kata) dan skor. Urutkan TURUN berdasarkan skor
// dengan selection sort. Nama harus ikut tertukar bersama skornya.
// Tampilkan "1. Siti 95" dan seterusnya.
// Masukan uji: 5  Rani 82 Budi 75 Siti 95 Andi 88 Doni 70

#include <iostream>
#include <string>
#include <utility>

using namespace std;

int main() {
    int n, skor[50];
    string nama[50];
    if (!(cin >> n)) return 0;
    for (int i = 0; i < n; i++) {
        cin >> nama[i] >> skor[i];
    }

    for (int i = 0; i < n - 1; i++) {
        int iMaks = i;
        for (int j = i + 1; j < n; j++) {
            if (skor[j] > skor[iMaks]) {
                iMaks = j;
            }
        }
        if (iMaks != i) {
            swap(skor[i], skor[iMaks]);
            swap(nama[i], nama[iMaks]);
        }
    }

    for (int i = 0; i < n; i++) {
        cout << (i + 1) << ". " << nama[i] << " " << skor[i] << "\n";
    }

    return 0;
}
