#include <iostream>
using namespace std;

int main() {
    
    string nama_barang;
    float harga, total, diskon;
    bool kondisi;
    int jumlah;

    cout << "Input nama barang: ";
    getline(cin, nama_barang);
    cout << "Input Harga barang: ";  
    cin >> harga;
    cout << "Input jumlah barang: ";
    cin >> jumlah;

    total = harga * jumlah;
    kondisi = total >= 50000;
    diskon = total * 0.10;
    total = total - diskon;
    
    cout << "Nama barang: " << nama_barang << " Dengan harga: " << harga << " Berjumlah: " << jumlah << " Harga Total: " << total;

    return 0;
}
