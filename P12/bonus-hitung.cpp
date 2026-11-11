// Bonus (Pengayaan): Menghitung Kerja Algoritma
// Sub-CPMK 12.1, CPMK0607
//
// Untuk tiga data: terurut {1,2,3,4,5,6}, terbalik {6,5,4,3,2,1}, dan acak
// {3,6,1,5,2,4}, hitung banyak perbandingan dan pertukaran bubble sort
// BERHENTI DINI (berhenti bila satu putaran tanpa pertukaran).
// Tampilkan "nama: perbandingan P, tukar T".

#include <iostream>
#include <string>
#include <utility>

using namespace std;

int main() {
    int data[3][6] = {
        {1, 2, 3, 4, 5, 6},
        {6, 5, 4, 3, 2, 1},
        {3, 6, 1, 5, 2, 4}
    };
    string nama[3] = {"terurut", "terbalik", "acak"};
    const int N = 6;

    for (int kasus = 0; kasus < 3; kasus++) {
        int arr[6];
        for (int i = 0; i < N; i++) {
            arr[i] = data[kasus][i];
        }

        int perbandingan = 0;
        int pertukaran = 0;

        for (int i = 0; i < N - 1; i++) {
            bool adaTukar = false;
            for (int j = 0; j < N - 1 - i; j++) {
                perbandingan++;
                if (arr[j] > arr[j + 1]) {
                    swap(arr[j], arr[j + 1]);
                    pertukaran++;
                    adaTukar = true;
                }
            }
            if (!adaTukar) {
                break;
            }
        }

        cout << nama[kasus] << ": perbandingan " << perbandingan
             << ", tukar " << pertukaran << "\n";
    }

    return 0;
}
