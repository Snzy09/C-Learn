// Hands-on 2 (Menengah): Analisis Kalimat
// Sub-CPMK 10.1, CPMK0607
//
// Baca satu baris kalimat dengan getline. Tampilkan panjang kalimat,
// banyak huruf vokal (a i u e o, besar maupun kecil), banyak kata
// (dipisah satu spasi), dan kalimat dalam huruf kapital.
// Masukan uji: "Belajar C++ di ITERA itu seru"

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    int panjang = (int) s.length();
    int vokal = 0;
    int kata = 0;
    string kapital = s;

    bool dalam_kata = false;
    for (int i = 0; i < panjang; i++) {
        char c = s[i];
        char lower = tolower(c);

        // Menghitung huruf vokal
        if (lower == 'a' || lower == 'i' || lower == 'u' || lower == 'e' || lower == 'o') {
            vokal++;
        }

        // Menghitung banyak kata berdasarkan pemisah spasi
        if (c != ' ') {
            if (!dalam_kata) {
                kata++;
                dalam_kata = true;
            }
        } else {
            dalam_kata = false;
        }

        // Mengubah ke huruf kapital
        kapital[i] = toupper(c);
    }

    cout << "Panjang: " << panjang << endl;
    cout << "Vokal: " << vokal << endl;
    cout << "Kata: " << kata << endl;
    cout << "Kapital: " << kapital << endl;

    return 0;
}
