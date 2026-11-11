# Lembar Jawaban Latihan Pertemuan 12: Sorting (Pengurutan Data)
**Mata Kuliah:** IF25-11002 Praktikum Pemrograman (Sejajar IF25-11001 Algoritma Pemrograman)  
**Program Studi:** Teknik Informatika - Institut Teknologi Sumatera  

---

## Identitas Mahasiswa
* **Nama:** M Ikhsan Candra Putra
* **NIM:** 126140138

---

## Capaian Pembelajaran (Sub-CPMK)
* **Sub-CPMK 12.1 (CPMK0607 - Menerapkan):** Menulis program yang mengurutkan array naik maupun turun dengan Bubble Sort dan Selection Sort, termasuk mengurutkan dua array sejajar sekaligus.
* **Sub-CPMK 12.2 (CPMK0608 - Menjelaskan):** Menelusuri isi array sesudah setiap putaran pengurutan dan menjelaskan banyak perbandingan serta pertukaran yang terjadi.

---

## Ringkasan Konsep Dasar Pengurutan

| Karakteristik | Bubble Sort | Selection Sort |
|---|---|---|
| **Ide Dasar** | Membandingkan pasangan bertetangga (`a[j]` & `a[j+1]`) dan menukarnya jika terbalik | Mencari elemen ekstrem (terkecil/terbesar) dari sisa array, lalu menukarnya ke posisi target |
| **Banyak Pertukaran (Swaps)** | Sering (bisa banyak pertukaran per putaran; worst-case $\frac{N(N-1)}{2}$) | Paling banyak $1$ pertukaran per putaran ($N-1$ total) |
| **Stabilitas** | Stabil (*stable*) jika operator pembanding menggunakan strict inequality (`>` atau `<`) | Tidak stabil secara alami (pertukaran jarak jauh dapat merusak urutan relatif data kembar) |
| **Optimasi Berhenti Dini** | Mendukung berhenti dini (*early exit*) jika dalam satu putaran penuh tidak ada pertukaran | Tidak lazim berhenti dini karena pencarian minimum harus tetap menyisir sisa array |
| **Array Sejajar** | Setiap penukaran elemen kunci harus disertai penukaran elemen pendamping di indeks yang sama | Sama; penukaran di akhir putaran memindahkan kunci dan pasangannya secara bersamaan |

---

## 1. Hands-on 1 (Dasar): Bubble Sort dengan Jejak (`handson1-bubble.cpp`)

### Deskripsi Masalah
Membaca jumlah data $n$ dan $n$ bilangan bulat. Urutkan secara menaik (*ascending*) menggunakan Bubble Sort dan cetak isi array sesudah setiap putaran (*pass*) selesai dilakukan.

### Kode Solusi
```cpp
#include <iostream>
#include <utility>

using namespace std;

int main() {
    int n, a[100];
    if (!(cin >> n)) return 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Outer loop: n - 1 putaran
    for (int i = 0; i < n - 1; i++) {
        // Inner loop: periksa pasangan bersebelahan hingga batas yang belum final
        for (int j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
            }
        }

        // Tampilkan keadaan array sesudah putaran ke-(i + 1)
        cout << "Putaran " << i + 1 << ":";
        for (int k = 0; k < n; k++) {
            cout << " " << a[k];
        }
        cout << "\n";
    }

    return 0;
}
```

### Jejak Eksekusi (Trace Table)
Masukan uji: `5` bilangan: `29 10 14 37 13`
* **Keadaan awal:** `29, 10, 14, 37, 13`
* **Putaran 1 ($i=0$):**
  - $j=0$: $29 > 10 \rightarrow$ tukar $\rightarrow$ `10, 29, 14, 37, 13`
  - $j=1$: $29 > 14 \rightarrow$ tukar $\rightarrow$ `10, 14, 29, 37, 13`
  - $j=2$: $29 \le 37 \rightarrow$ tetap $\rightarrow$ `10, 14, 29, 37, 13`
  - $j=3$: $37 > 13 \rightarrow$ tukar $\rightarrow$ `10, 14, 29, 13, 37`
  - *Hasil Putaran 1:* `10 14 29 13 37` (nilai terbesar $37$ berada di posisi akhirnya).
* **Putaran 2 ($i=1$):**
  - $j=0$: $10 \le 14 \rightarrow$ tetap
  - $j=1$: $14 \le 29 \rightarrow$ tetap
  - $j=2$: $29 > 13 \rightarrow$ tukar $\rightarrow$ `10, 14, 13, 29, 37`
  - *Hasil Putaran 2:* `10 14 13 29 37` (nilai $29$ terkunci di posisi index 3).
* **Putaran 3 ($i=2$):**
  - $j=0$: $10 \le 14 \rightarrow$ tetap
  - $j=1$: $14 > 13 \rightarrow$ tukar $\rightarrow$ `10, 13, 14, 29, 37`
  - *Hasil Putaran 3:* `10 13 14 29 37`
* **Putaran 4 ($i=3$):**
  - $j=0$: $10 \le 13 \rightarrow$ tetap
  - *Hasil Putaran 4:* `10 13 14 29 37`

---

## 2. Hands-on 2 (Menengah): Papan Peringkat dengan Selection Sort (`handson2-peringkat.cpp`)

### Deskripsi Masalah
Membaca $n$ peserta yang terdiri dari nama (satu kata) dan skor. Urutkan peserta secara menurun (*descending*) berdasarkan perolehan skor menggunakan Selection Sort. Penukaran skor harus disertai penukaran nama agar data peserta tidak tertukar.

### Kode Solusi
```cpp
#include <iostream>
#include <string>
#include <utility>

using namespace std;

int main() {
    int n, skor[50];
    string nama[50];
    if (!(cin >> n)) return 0;
    for (int i = 0; i < n; i++) {
        cin >> nama[i] >> skor[i];
    }

    // Selection sort menurun: cari indeks nilai terbesar di sisa array
    for (int i = 0; i < n - 1; i++) {
        int iMaks = i;
        for (int j = i + 1; j < n; j++) {
            if (skor[j] > skor[iMaks]) {
                iMaks = j;
            }
        }
        // Sinkronisasi pertukaran dua array sejajar
        if (iMaks != i) {
            swap(skor[i], skor[iMaks]);
            swap(nama[i], nama[iMaks]);
        }
    }

    // Tampilkan leaderboard berformat nomor peringkat
    for (int i = 0; i < n; i++) {
        cout << (i + 1) << ". " << nama[i] << " " << skor[i] << "\n";
    }

    return 0;
}
```

### Keluaran Pengujian
Masukan:
```text
5
Rani 82
Budi 75
Siti 95
Andi 88
Doni 70
```
Keluaran:
```text
1. Siti 95
2. Andi 88
3. Rani 82
4. Budi 75
5. Doni 70
```

---

## 3. Hands-on 3 (Tantangan): Perbaikan Bubble Sort (`handson3-tukar.cpp`)

### Analisis Kesalahan Awal
Diberikan program awal yang ingin mengurutkan `{5, 1, 4, 2, 8, 3}` menjadi `1 2 3 4 5 8`:

```cpp
// KODE BERMASALAH:
for (int i = 0; i < N - 3; i++) {          // [KESALAHAN 1]
    for (int j = 0; j < N - 1 - i; j++) {
        if (a[j] < a[j + 1]) {            // [KESALAHAN 2]
            a[j] = a[j + 1];               // [KESALAHAN 3]
            a[j + 1] = a[j];
        }
    }
}
```

1. **Kesalahan 1 (Jumlah Putaran Kurang):**
   * *Masalah:* Batas luar `i < N - 3` hanya menjalankan $6 - 3 = 3$ putaran.
   * *Dampak:* Algoritma berhenti sebelum seluruh elemen yang belum urut berpindah ke posisi semestinya (pada kasus terburuk dibutuhkan $N - 1$ putaran).
   * *Perbaikan:* Ubah menjadi `i < N - 1`.

2. **Kesalahan 2 (Arah Perbandingan Terbalik):**
   * *Masalah:* Kondisi `a[j] < a[j + 1]` menukar elemen saat elemen kiri lebih kecil dari elemen kanan.
   * *Dampak:* Program menghasilkan urutan menurun (*descending*), bukan menaik (*ascending*).
   * *Perbaikan:* Ubah menjadi `a[j] > a[j + 1]`.

3. **Kesalahan 3 (Pertukaran Merusak Nilai Tanpa Penampung Sementara):**
   * *Masalah:* Penugasan `a[j] = a[j + 1];` menimpa nilai asli `a[j]`. Baris berikutnya `a[j + 1] = a[j];` hanya menyalin nilai yang baru saja ditimpa.
   * *Dampak:* Nilai asli `a[j]` musnah dan kedua elemen bernilai identik (duplikasi nilai).
   * *Perbaikan:* Gunakan `std::swap(a[j], a[j + 1]);` atau variabel penampung sementara (`int temp = a[j]; a[j] = a[j + 1]; a[j + 1] = temp;`).

### Jejak Putaran Pertama Sesudah Perbaikan
Data awal: `{5, 1, 4, 2, 8, 3}`
* Pasangan $(a[0]=5, a[1]=1) \rightarrow 5 > 1 \rightarrow$ **Tukar:** `1, 5, 4, 2, 8, 3`
* Pasangan $(a[1]=5, a[2]=4) \rightarrow 5 > 4 \rightarrow$ **Tukar:** `1, 4, 5, 2, 8, 3`
* Pasangan $(a[2]=5, a[3]=2) \rightarrow 5 > 2 \rightarrow$ **Tukar:** `1, 4, 2, 5, 8, 3`
* Pasangan $(a[3]=5, a[4]=8) \rightarrow 5 \le 8 \rightarrow$ **Tetap:** `1, 4, 2, 5, 8, 3`
* Pasangan $(a[4]=8, a[5]=3) \rightarrow 8 > 3 \rightarrow$ **Tukar:** `1, 4, 2, 5, 3, 8`

*Kondisi array di akhir Putaran 1:* `1, 4, 2, 5, 3, 8` (angka 8 telah sampai pada posisi paling kanan).

---

## 4. Bonus (Pengayaan): Menghitung Beban Kerja Algoritma (`bonus-hitung.cpp`)

### Analisis Efisiensi Bubble Sort Berhenti Dini (*Early-Exit*)
Bubble sort standar selalu menjalankan $\frac{N(N-1)}{2}$ perbandingan. Dengan menambahkan flag penanda pertukaran (`bool adaTukar = false`), pengurutan dapat dihentikan seketika saat satu putaran tidak menemukan pasangan yang salah urut.

### Hasil Komparasi Beban Kerja ($N=6$)

| Karakteristik Kasus | Susunan Data | Banyak Perbandingan | Banyak Pertukaran | Keterangan |
|---|---|---|---|---|
| **Terurut (Best Case)** | `{1, 2, 3, 4, 5, 6}` | **5** | **0** | Berhenti langsung pada putaran ke-1 karena `adaTukar == false`. Kompleksitas $O(N)$. |
| **Terbalik (Worst Case)** | `{6, 5, 4, 3, 2, 1}` | **15** | **15** | Setiap pasangan selalu ditukar. Melewati 5 putaran penuh ($5+4+3+2+1 = 15$). Kompleksitas $O(N^2)$. |
| **Acak (Average Case)** | `{3, 6, 1, 5, 2, 4}` | **14** | **8** | Menjalankan 4 putaran sampai array terverifikasi stabil. |

---

## 5. Jawaban Instrumen Evaluasi & Exit Ticket 12

### Bagian A: Menulis Kode

#### A1. Bubble Sort Urutan Menurun
```cpp
void bubbleSortDesc(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (a[j] < a[j + 1]) { // Gunakan tanda '<' untuk descending
                swap(a[j], a[j + 1]);
            }
        }
    }
}
```

#### A2. Pengurutan Dua Array Sejajar (Selection Sort)
```cpp
void urutkanNilaiPeserta(string nama[], int nilai[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int iMaks = i;
        for (int j = i + 1; j < n; j++) {
            if (nilai[j] > nilai[iMaks]) {
                iMaks = j;
            }
        }
        if (iMaks != i) {
            swap(nilai[i], nilai[iMaks]);
            swap(nama[i], nama[iMaks]); // Wajib ikut ditukar
        }
    }
}
```

### Bagian B: Menelusuri & Menjelaskan

#### B1. Jejak Isi Array per Putaran Selection Sort (Menaik)
Untuk data: `{29, 10, 14, 37, 13}` ($N=5$)
* **Putaran 1 ($i=0$):** Cari elemen terkecil di indeks 0..4 $\rightarrow$ ditemukan 10 di indeks 1. Tukar dengan indeks 0.  
  *Array:* `10, 29, 14, 37, 13`
* **Putaran 2 ($i=1$):** Cari elemen terkecil di indeks 1..4 $\rightarrow$ ditemukan 13 di indeks 4. Tukar dengan indeks 1.  
  *Array:* `10, 13, 14, 37, 29`
* **Putaran 3 ($i=2$):** Cari elemen terkecil di indeks 2..4 $\rightarrow$ ditemukan 14 di indeks 2. Tidak ada pertukaran (`iMin == i`).  
  *Array:* `10, 13, 14, 37, 29`
* **Putaran 4 ($i=3$):** Cari elemen terkecil di indeks 3..4 $\rightarrow$ ditemukan 29 di indeks 4. Tukar dengan indeks 3.  
  *Array:* `10, 13, 14, 29, 37`

#### B2. Penjelasan Kesalahan Pertukaran Variabel
Jika ditulis:
```cpp
a = b;
b = a;
```
*Kesalahan:* Pada baris pertama, nilai asli `a` langsung tertimpa oleh nilai `b`. Akibatnya, pada baris kedua, `b` diisi oleh nilai `a` baru yang nilainya sudah sama dengan `b`. Kedua variabel kini memiliki nilai `b` dan nilai lama `a` hilang permanen. Solusinya membutuhkan variabel penampung sementara (`temp`) atau pemanggilan fungsi `swap(a, b)`.

#### B3. Komparasi Banyak Pertukaran Bubble Sort vs Selection Sort
Untuk array terbalik berukuran $N=5$ (`{5, 4, 3, 2, 1}`):
* **Selection Sort:** Hanya melakukan $1$ kali pertukaran per putaran luar $\rightarrow$ total $N - 1 = 4$ pertukaran.
* **Bubble Sort:** Melakukan pertukaran pada setiap evaluasi pasangan yang salah urut $\rightarrow$ total $4 + 3 + 2 + 1 = 10$ pertukaran.  
*Kesimpulan:* Selection Sort jauh lebih hemat operasi penulisan memori (*write-efficient*) dibandingkan Bubble Sort.
