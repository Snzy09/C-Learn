# Lembar Jawaban Latihan Pertemuan 13: Fungsi dan Modularitas
**Mata Kuliah:** IF25-11002 Praktikum Pemrograman (Sejajar IF25-11001 Algoritma Pemrograman)  
**Program Studi:** Teknik Informatika - Institut Teknologi Sumatera  

---

## Identitas Mahasiswa
* **Nama:** M Ikhsan Candra Putra
* **NIM:** 126140138

---

## Capaian Pembelajaran (Sub-CPMK)
* **Sub-CPMK 13.1 (CPMK0607 - Menerapkan):** Menulis program yang dipecah menjadi fungsi dengan parameter dan nilai kembali yang tepat, termasuk fungsi `void`, fungsi `bool`, parameter referensi, dan parameter array.
* **Sub-CPMK 13.2 (CPMK0608 - Menjelaskan):** Menelusuri aliran nilai pada pemanggilan fungsi dan menjelaskan perbedaan *pass by value* dan *pass by reference* serta jangkauan variabel lokal.

---

## Ringkasan Konsep Dasar Fungsi & Modularitas

| Karakteristik | *Pass by Value* (Salinan Nilai) | *Pass by Reference* (Referensi Alamat) | Parameter Array |
|---|---|---|---|
| **Sintaksis** | `tipe namaVar` (misal: `int x`) | `tipe &namaVar` (misal: `int &x`) | `tipe namaArr[]` / `const tipe namaArr[]` |
| **Mekanisme Pengiriman** | Nilai argumen disalin ke variabel lokal fungsi baru | Mengikat alias langsung ke alamat memori variabel pemanggil | Mengirimkan pointer ke elemen pertama (*array decay*) |
| **Dampak Perubahan di Fungsi** | Perubahan nilai **hanya lokal**, tidak mengubah variabel asli | Perubahan nilai **langsung mengubah** variabel asli pemanggil | Perubahan isi elemen **langsung berdampak** ke array asli |
| **Efisiensi Memori/Waktu** | Memerlukan alokasi memori tambahan seukuran tipe data | Sangat efisien, tidak ada penyalinan data (*zero-copy*) | Efisien, tidak menyalin seluruh elemen array |
| **Kapan Digunakan** | Data primitif kecil yang tidak perlu diubah pemanggilnya | Menghasilkan multi-output, menukar variabel (`swap`), atau objek besar | Memproses sekumpulan data berindeks (disertai parameter ukuran `n`) |

---

## 1. Hands-on 1 (Dasar): Fungsi Bangun Datar (`handson1-bangun.cpp`)

### Deskripsi Masalah
Membuat program modular dengan mendefinisikan tiga fungsi terpisah:
1. `void garis(int n)`: Menampilkan karakter strip (`-`) sebanyak $n$ kali diikuti baris baru.
2. `double luasPersegiPanjang(double p, double l)`: Mengembalikan hasil kali panjang $p$ dan lebar $l$.
3. `double luasLingkaran(double r)`: Mengembalikan hasil perhitungan luas lingkaran $\pi \times r^2$ dengan konstanta $\pi = 3.14159$.

Program utama (`main`) memanggil `garis(24)`, menampilkan luas persegi panjang $8 \times 5$, luas lingkaran dengan jari-jari $7$, dan ditutup kembali dengan `garis(24)`.

### Kode Solusi
```cpp
#include <iostream>

using namespace std;

// Fungsi void untuk mencetak garis pembatas sebanyak n karakter
void garis(int n) {
    for (int i = 0; i < n; i++) {
        cout << "-";
    }
    cout << endl;
}

// Fungsi menghitung luas persegi panjang (panjang x lebar)
double luasPersegiPanjang(double p, double l) {
    return p * l;
}

// Fungsi menghitung luas lingkaran (pi x r^2) dengan pi = 3.14159
double luasLingkaran(double r) {
    return 3.14159 * r * r;
}

int main() {
    garis(24);
    cout << "Luas persegi panjang: " << luasPersegiPanjang(8, 5) << endl;
    cout << "Luas lingkaran: " << luasLingkaran(7) << endl;
    garis(24);

    return 0;
}
```

### Keluaran Program
```text
------------------------
Luas persegi panjang: 40
Luas lingkaran: 153.938
------------------------
```

---

## 2. Hands-on 2 (Menengah): Fungsi bool dan Array (`handson2-prima.cpp`)

### Deskripsi Masalah
Membaca jumlah elemen $n$ dan $n$ bilangan bulat ke dalam array. Membangun program terstruktur dengan prototipe fungsi di atas `main`:
1. `bool isPrima(int x)`: Mengembalikan `true` jika bilangan $x$ merupakan bilangan prima ($x > 1$ dan tidak memiliki faktor pembagi selain 1 dan dirinya sendiri).
2. `int hitungPrima(int a[], int n)`: Melakukan iterasi terhadap seluruh elemen array dan menghitung akumulasi kemunculan bilangan prima dengan memanfaatkan fungsi `isPrima`.

### Kode Solusi
```cpp
#include <iostream>

using namespace std;

// Prototipe fungsi
bool isPrima(int x);
int hitungPrima(int a[], int n);

int main() {
    int n, a[50];
    if (!(cin >> n)) return 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Tampilkan status prima per bilangan
    for (int i = 0; i < n; i++) {
        cout << a[i] << " " << (isPrima(a[i]) ? "prima" : "bukan") << "\n";
    }

    // Tampilkan total bilangan prima
    cout << "Banyak bilangan prima: " << hitungPrima(a, n) << "\n";

    return 0;
}

// Fungsi memeriksa apakah x adalah bilangan prima
bool isPrima(int x) {
    if (x <= 1) return false;
    if (x == 2) return true;
    if (x % 2 == 0) return false;
    for (int i = 3; i * i <= x; i += 2) {
        if (x % i == 0) return false;
    }
    return true;
}

// Fungsi menghitung banyak bilangan prima dalam array a berukuran n
int hitungPrima(int a[], int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        if (isPrima(a[i])) {
            total++;
        }
    }
    return total;
}
```

### Keluaran Pengujian
**Masukan:**
```text
6 2 9 13 1 21 29
```
**Keluaran:**
```text
2 prima
9 bukan
13 prima
1 bukan
21 bukan
29 prima
Banyak bilangan prima: 3
```

---

## 3. Hands-on 3 (Tantangan): Perbaiki Fungsi & Penelusuran Parameter (`handson3-referensi.cpp`)

### Analisis Tiga Kesalahan Program
Program awal mengandung tiga kesalahan fatal yang menghalangi tercapainya luaran yang diharapkan:
1. **Kesalahan 1 (Fungsi `tukar`) — Pass by Value vs Pass by Reference:**
   * *Masalah:* Parameter `void tukar(int x, int y)` dideklarasikan secara *pass by value*. Operasi penukaran hanya memengaruhi variabel salinan lokal di dalam bingkai tumpukan fungsi `tukar`. Saat fungsi selesai, memori lokal dihapus dan variabel pemanggil `p` serta `q` di `main` nilainya tetap tidak berubah.
   * *Solusi:* Ubah deklarasi parameter menjadi *pass by reference* dengan operator `&` (`void tukar(int &x, int &y)`).
2. **Kesalahan 2 (Fungsi `rataRata`) — Pembagian Bilangan Bulat (*Integer Division*):**
   * *Masalah:* Variabel `total` bertipe `int` dan parameter `n` bertipe `int`. Ekspresi `return total / n;` menjalankan pembagian integer yang membuang angka di belakang koma (truncation). Nilai total $310 / 4$ menghasilkan $77$ alih-alih $77.5$.
   * *Solusi:* Lakukan konversi tipe (*type casting*) ke desimal pada salah satu operan: `static_cast<double>(total) / n`.
3. **Kesalahan 3 (Fungsi `batasi`) — Jalur Aliran Tanpa Nilai Kembali (*Missing Return Statement*):**
   * *Masalah:* Fungsi `int batasi(int nilai)` hanya mengembalikan nilai jika `nilai < 0` atau `nilai > 100`. Untuk nilai di rentang $[0, 100]$, eksekusi mencapai akhir blok fungsi tanpa perintah `return`. Ini memicu *warning compiler* (`control reaches end of non-void function`) dan mengakibatkan *undefined behavior*.
   * *Solusi:* Tambahkan `return nilai;` di akhir fungsi untuk nilai yang valid.

### Penelusuran Eksekusi (*Trace Table*)

| Pemanggilan Fungsi | Parameter Formal | Nilai Argumen Masuk | Proses Internal | Nilai Kembali / Efek Samping |
|---|---|---|---|---|
| `tukar(p, q)` | `int &x = p`, `int &y = q` | $p=4, q=9$ | $t=4 \rightarrow x=9 \rightarrow y=4$ | Variabel $p$ menjadi $9$, $q$ menjadi $4$ |
| `rataRata(data, 4)` | `int a[]`, `n = 4` | `{70, 85, 60, 95}` | `total` $= 70+85+60+95 = 310$ | `310.0 / 4` $\rightarrow$ mengembalikan **$77.5$** |
| `batasi(-5)` | `nilai = -5` | $-5$ | Memenuhi kondisi `nilai < 0` | Mengembalikan **$0$** |
| `batasi(120)` | `nilai = 120` | $120$ | Memenuhi kondisi `nilai > 100` | Mengembalikan **$100$** |
| `batasi(65)` | `nilai = 65` | $65$ | Melompat kedua kondisi, eksekusi fallback | Mengembalikan **$65$** |

### Kode Solusi Lengkap
```cpp
#include <iostream>

using namespace std;

// Diperbaiki: Menggunakan pass by reference (&) agar variabel asli tertukar
void tukar(int &x, int &y) {
    int t = x;
    x = y;
    y = t;
}

// Diperbaiki: Cast total ke double sebelum pembagian agar menghasilkan desimal
double rataRata(int a[], int n) {
    int total = 0;
    for (int i = 0; i < n; i++) total += a[i];
    return static_cast<double>(total) / n;
}

// Diperbaiki: Menambahkan return nilai untuk menangani angka dalam rentang [0, 100]
int batasi(int nilai) {
    if (nilai < 0) return 0;
    if (nilai > 100) return 100;
    return nilai;
}

int main() {
    int p = 4, q = 9;
    tukar(p, q);
    cout << "Sesudah tukar: " << p << " " << q << endl;

    int data[4] = {70, 85, 60, 95};
    cout << "Rata-rata: " << rataRata(data, 4) << endl;

    cout << "Dibatasi: " << batasi(-5) << " " << batasi(120) << " " << batasi(65) << endl;

    return 0;
}
```

### Keluaran Program
```text
Sesudah tukar: 9 4
Rata-rata: 77.5
Dibatasi: 0 100 65
```

---

## 4. Bonus (Pengayaan): Pustaka Statistik Kecil (`bonus-statistik.cpp`)

### Deskripsi Masalah
Membuat pustaka modular untuk operasi statistik pada array satu dimensi:
* `int minimum(const int a[], int n)`: Menemukan nilai terkecil pada array.
* `int maksimum(const int a[], int n)`: Menemukan nilai terbesar pada array.
* `double rataRata(const int a[], int n)`: Menghitung rata-rata nilai elemen dalam tipe data desimal `double`.
* `void urutkan(int a[], int n)`: Mengurutkan elemen array secara menaik (*ascending*) menggunakan algoritma Bubble Sort.

### Kode Solusi
```cpp
#include <iostream>
#include <utility>

using namespace std;

// Fungsi mencari nilai minimum dalam array
int minimum(const int a[], int n) {
    int minVal = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] < minVal) {
            minVal = a[i];
        }
    }
    return minVal;
}

// Fungsi mencari nilai maksimum dalam array
int maksimum(const int a[], int n) {
    int maxVal = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > maxVal) {
            maxVal = a[i];
        }
    }
    return maxVal;
}

// Fungsi menghitung nilai rata-rata elemen array dalam bentuk desimal (double)
double rataRata(const int a[], int n) {
    double total = 0;
    for (int i = 0; i < n; i++) {
        total += a[i];
    }
    return total / n;
}

// Fungsi mengurutkan array secara menaik (ascending) menggunakan Bubble Sort
void urutkan(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
            }
        }
    }
}

int main() {
    int n, a[100];
    if (!(cin >> n)) return 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Minimum: " << minimum(a, n) << "\n";
    cout << "Maksimum: " << maksimum(a, n) << "\n";
    cout << "Rata-rata: " << rataRata(a, n) << "\n";

    urutkan(a, n);
    cout << "Terurut:";
    for (int i = 0; i < n; i++) {
        cout << " " << a[i];
    }
    cout << "\n";

    return 0;
}
```

### Keluaran Pengujian
**Masukan:**
```text
7 12 5 30 8 21 5 17
```
**Keluaran:**
```text
Minimum: 5
Maksimum: 30
Rata-rata: 14
Terurut: 5 5 8 12 17 21 30
```
