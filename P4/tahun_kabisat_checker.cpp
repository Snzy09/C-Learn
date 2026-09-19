#include <iostream>
using namespace std;
// Nama : M Ikhsan C P
// Nim  : 126140138

int main() {
    int tahun;

    cout << "Masukkan tahun: ";
    cin >> tahun;

    if (tahun % 4 == 0 && (tahun % 100 != 0 || tahun % 400 == 0)) {
        cout << tahun << " adalah tahun kabisat.\n" << endl;
    } else {
        cout << tahun << " bukan tahun kabisat.\n" << endl;
    }

    cout << "Create By Ikhsan" << endl;
    return 0;
}
