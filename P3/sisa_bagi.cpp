#include <iostream>
using namespace std;
// Nama : M Ikhsan Candra Putra
// NIM  : 126140138
int main() {
    int nilai, cek;
    bool status;

    cout << "Input nilai: ";
    cin >> nilai;
    cek = nilai % 2;
    status = cek == 0;
    
    cout << "Sisa bagi adalah: " << cek << " Berupa " << (status ? "Bilangan genap":"Bilangan Ganjil") << endl;
    cout << "Create By M Ikhsan Candra Putra";
    return 0;
}
