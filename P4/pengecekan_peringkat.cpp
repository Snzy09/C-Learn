#include <iostream>
  // Nama : M Ikhsan C P
  // Nim  : 126140138
using namespace std;
    int main() {                                                                                                                                     
    int nilai;
    
    cout << "Masukkan Nilai : ";
    cin >> nilai;
  
    
    if (nilai > 75) {
        cout << "=================\nNilai Anda: " << nilai << "\nStatus : Lulus";
    }
    else if ( nilai < 75) {
        cout << "=================\nNilai Anda: " << nilai << "\nStatus : Tidak Lulus";
    }
    else {
        cout << "Nilai Tidak Valid";
    }
    cout << "\n\nM ikhsan Candra Putra";
    cout << "\n126140138";
    return 0;
    }
