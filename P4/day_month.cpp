#include <iostream>
using namespace std; // module
// Nama : M Ikhsan C P
// Nim  : 126140138

int main() {
    int hari, bulan;

    cout << "Masukkan angka hari (1-7): ";
    cin >> hari;

    switch (hari) {
        case 1: cout << "Senin" << endl; break;
        case 2: cout << "Selasa" << endl; break;
        case 3: cout << "Rabu" << endl; break;
        case 4: cout << "Kamis" << endl; break;
        case 5: cout << "Jumat" << endl; break;
        case 6: cout << "Sabtu" << endl; break;
        case 7: cout << "Minggu" << endl; break;
        default: cout << "Invalid" << endl;
    }

    cout << "Masukkan angka bulan (1-12): ";
    cin >> bulan;

    string nama_bulan;
    int jumlah_hari;

    nama_bulan = (bulan == 1) ? "Januari" : (bulan == 2) ? "Februari" : (bulan == 3) ? "Maret" :
                  (bulan == 4) ? "April" : (bulan == 5) ? "Mei" : (bulan == 6) ? "Juni" :
                  (bulan == 7) ? "Juli" : (bulan == 8) ? "Agustus" : (bulan == 9) ? "September" :
                  (bulan == 10) ? "Oktober" : (bulan == 11) ? "November" : (bulan == 12) ? "Desember" : "Invalid";

    jumlah_hari = (bulan == 1 || bulan == 3 || bulan == 5 || bulan == 7 || bulan == 8 || bulan == 10 || bulan == 12) ? 31 :
                  (bulan == 4 || bulan == 6 || bulan == 9 || bulan == 11) ? 30 :
                  (bulan == 2) ? 28 : 0;

    cout << "Bulan: " << nama_bulan << endl;
    cout << "Jumlah hari: " << jumlah_hari << endl;

    cout << "Create By Ikhsan" << endl;
    return 0;
}
