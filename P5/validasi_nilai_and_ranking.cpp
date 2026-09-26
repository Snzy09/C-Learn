// Nama : M Ikhsan Candra Putra
// NIM  : 126140138

#include <iostream>

using namespace std;

int main() {
    float nilai;

    cout << "──────────────────────────────────────────\n";
    cout << "        PROGRAM VALIDASI NILAI            \n";
    cout << "──────────────────────────────────────────\n";

    while (true) {
        cout << "Masukkan nilai (0 - 100): ";
        cin >> nilai;

        if (nilai >= 0 && nilai <= 100) {
            break;
        }

        cout << "⚠️ Validasi Gagal: Nilai harus antara 0 sampai 100!\n";
        cout << "──────────────────────────────────────────\n";
    }

    char kategori;
    
    if ( nilai >= 75) {
        kategori = 'A';
    }
    else if ( nilai >= 65 && nilai <= 74 ) {
        kategori = 'B';
    } 
    else (kategori = 'C');
    
    cout << "──────────────────────────────────────────\n";
    cout << "            HASIL VALIDASI                \n";
    cout << "──────────────────────────────────────────\n";
    cout << "Nilai Valid : " << nilai << endl;
    cout << "Kategori    : " << kategori << endl;
    cout << "──────────────────────────────────────────\n";
    cout << "Nama        : M Ikhsan Candra Putra\n";
    cout << "NIM         : 126140138\n";
    cout << "──────────────────────────────────────────\n";

    return 0;
}
