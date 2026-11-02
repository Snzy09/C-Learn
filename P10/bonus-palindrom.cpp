// Bonus (Pengayaan): Palindrom
// Sub-CPMK 10.1, CPMK0607
//
// Baca tiga kata. Untuk setiap kata tampilkan apakah palindrom (dibaca sama
// dari depan dan belakang, tanpa membedakan huruf besar-kecil).
// Masukan uji: Katak radar Algoritma

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    for (int k = 0; k < 3; k++) {
        string w;
        cin >> w;

        // Bandingkan w[i] dengan w[panjang - 1 - i] tanpa membedakan kapitalisasi
        int len = (int) w.length();
        bool palindrom = true;
        for (int i = 0; i < len / 2; i++) {
            if (tolower(w[i]) != tolower(w[len - 1 - i])) {
                palindrom = false;
                break;
            }
        }

        if (palindrom) {
            cout << w << ": Palindrom" << endl;
        } else {
            cout << w << ": Bukan palindrom" << endl;
        }
    }
    return 0;
}
