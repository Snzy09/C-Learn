#include <iostream>
using namespace std;
// Nama : M Ikhsan Candra Putra 
// NIM : 126140138 

int main() {
    int angka1, angka2, cek_bagi, cek_besar, cek_hasil, cek_ganjil1, cek_ganjil2;

    cout << "Input Angka 1: ";
    cin >> angka1;
    cout << "Input Angka 2: ";
    cin >> angka2;
    
        
    cout << "Penjumlahan: " << angka1 + angka2 << endl;
    cout << "Pengurangan: " <<angka1 - angka2 << endl;
    cout << "Perkalian: " << angka1 * angka2 << endl;
    cout << "Pembagian: " << angka1 / angka2 << endl;
    cout << "Modulus: " << angka1 % angka2 << endl;
    
    cout << "==============================================================" << endl;
    
    cek_bagi = angka1 / angka2 == 0;
    cout << "Sisa Bagi adalah 0 ? " << (cek_bagi ? "Iya":"Tidak") << " Karna sisa bagi bernilai: " << angka1 / angka2 << endl;
    
    cout << "==============================================================" << endl;
    
    cek_besar = angka1 > angka2;
    cout << "Apakah angka 1 lebih besar ? " << (cek_besar ? "Iya":"Tidak") << " Karna angka 1 adalah: " << angka1 << " dan angka 2 adalah: " << angka2 << endl;

    cout << "==============================================================" << endl;
    cout << "Bonus Challange!"
    cek_hasil = angka1 + angka2 >= 100 && angka1 * angka2 >= 50;
    cout << "Apakah hasil penjumlahan lebih dari 100 dan perkalian lebih dari 50: " << (cek_hasil ? "Keduanya memenuhi":"Salah satu atau keduanya tidak memenuhi") << endl;

    cout << "==============================================================" << endl;

    cek_ganjil1 = angka1 % 2 >= 1;
    cout << "Apakah Angka 1 bilangan ganjil: " << (cek_ganjil1 ? "Angka 1 Merupakan Bilangan Ganjil":"Angka 1 Merupakan Bilangan Genap") << endl;
    
    cek_ganjil2 = angka2 % 2 >= 1;
    cout << "Apakah Angka 2 bilangan ganjil: " << (cek_ganjil1 ? "Angka 2 Merupakan Bilangan Ganjil":"Angka 2 Merupakan Bilangan Genap") << endl;
        
    cout << "==============================================================" << endl;
    
    cout << "Create By M Ikhsan Candra Putra";

    return 0;
}
