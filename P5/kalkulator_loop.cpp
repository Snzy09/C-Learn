// Nama : M Ikhsan Candra Putra
// NIM  : 126140138

#include <iostream>

using namespace std;

int main() {
    int pilihan;
    double a, b;

    do {
        cout << "──────────────────────────────────────────\n";
        cout << "             MENU KALKULATOR              \n";
        cout << "──────────────────────────────────────────\n";
        cout << "1. Tambah\n";
        cout << "2. Kurang\n";
        cout << "3. Kali\n";
        cout << "4. Modulo\n";
        cout << "5. Pembagian\n";
        cout << "6. Keluar\n";
        cout << "──────────────────────────────────────────\n";
        cout << "Pilih menu (1-6): ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Masukkan angka pertama : ";
                cin >> a;
                cout << "Masukkan angka kedua   : ";
                cin >> b;
                cout << "Hasil Penjumlahan      : " << a + b << endl;
                break;
            case 2:
                cout << "Masukkan angka pertama : ";
                cin >> a;
                cout << "Masukkan angka kedua   : ";
                cin >> b;
                cout << "Hasil Pengurangan      : " << a - b << endl;
                break;
            case 3:
                cout << "Masukkan angka pertama : ";
                cin >> a;
                cout << "Masukkan angka kedua   : ";
                cin >> b;
                cout << "Hasil Perkalian        : " << a * b << endl;
                break;
            case 4:
                cout << "Masukkan angka pertama : ";
                cin >> a;
                cout << "Masukkan angka kedua   : ";
                cin >> b;
                cout << "Hasil Modulo           : " << (int)a % (int)b << endl;
                break;
            case 5:
                cout << "Masukkan angka pertama : ";
                cin >> a;
                cout << "Masukkan angka kedua   : ";
                cin >> b;
                cout << "Hasil Pembagian        : " << (int)a / (int)b << endl;
                break;
            case 6:
                cout << "Terima kasih, program selesai.\n";
                break;
            default:
                cout << "<!> Pilihan tidak valid! Silakan pilih 1, 2, atau 3.\n";
                break;
        }

    } while (pilihan != 3);

    cout << "──────────────────────────────────────────\n";
    cout << "Nama : M Ikhsan Candra Putra\n";
    cout << "NIM  : 126140138\n";
    cout << "──────────────────────────────────────────\n";

    return 0;
}
