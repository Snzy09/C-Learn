# Lembar Jawaban Latihan Pertemuan 11: Searching (Pencarian Data)
**Mata Kuliah:** IF25-11002 Praktikum Pemrograman (Sejajar IF25-11001 Algoritma Pemrograman)  
**Program Studi:** Teknik Informatika - Institut Teknologi Sumatera  

---

## Identitas Mahasiswa
* **Nama:** [Isi Nama Anda]
* **NIM:** [Isi NIM Anda]

---

## Capaian Pembelajaran (Sub-CPMK)
* **Sub-CPMK 11.1 (CPMK0607 - Menerapkan):** Menulis program yang mencari data pada array dengan linear search dan binary search, termasuk mencari semua kemunculan dan menangani data yang tidak ditemukan.
* **Sub-CPMK 11.2 (CPMK0608 - Menjelaskan):** Menelusuri langkah binary search dengan trace table `low`, `high`, dan `mid`, serta menjelaskan perbedaan banyak perbandingan kedua algoritma.

---

## Ringkasan Konsep Dasar Searching

| Karakteristik | Linear Search (Pencarian Beruntun) | Binary Search (Pencarian Biner) |
|---|---|---|
| **Prasyarat Data** | Data acak / tidak perlu terurut | **Wajib terurut** (*sorted*) |
| **Metode** | Memeriksa elemen satu per satu dari awal | Membagi dua ruang pencarian pada setiap langkah |
| **Banyak Langkah Terbaik (Best Case)** | $1$ (elemen di indeks pertama) | $1$ (elemen di tengah array) |
| **Banyak Langkah Terburuk (Worst Case)** | $N$ (elemen di akhir atau tidak ada) | $\approx \lceil \log_2 N \rceil$ langkah |
| **Struktur Kontrol** | `for` loop dengan `break` | `while (low <= high)` dengan 3 pointer |

---

## 1. Hands-on 1 (Dasar): Linear Search (`handson1-cari.cpp`)

### Deskripsi Soal
Membaca $n$, array berukuran $n$, dan nilai target $x$. Menggunakan linear search untuk mencari kemunculan pertama $x$, mencetak indeks kemunculannya atau keterangan tidak ditemukan, serta banyak perbandingan yang dilakukan.

### Kode Solusi
```cpp
#include <iostream>
using namespace std;

int main() {
    for (int kasus = 0; kasus < 2; kasus++) {
        int n, a[100], x;
        cin >> n;
        for (int i = 0; i < n; i++) cin >> a[i];
        cin >> x;
        int posisi = -1, banding = 0;

        // Linear search, berhenti di kemunculan pertama
        for (int i = 0; i < n; i++) {
            banding++;
            if (a[i] == x) {
                posisi = i;
                break;
            }
        }

        // Tampilkan hasil pencarian dan banyak perbandingan
        if (posisi != -1) {
            cout << x << " ditemukan di indeks " << posisi << endl;
        } else {
            cout << x << " tidak ditemukan" << endl;
        }
        cout << "Perbandingan: " << banding << endl;
    }
    return 0;
}
```

### Hasil Uji
* **Kasus 1 (Cari 7 pada array `[12, 7, 30, 7, 18, 4]`):**
  * Elemen 12 diperiksa (banding = 1, tidak cocok).
  * Elemen 7 diperiksa (banding = 2, cocok pada indeks 1). Perulangan dihentikan (`break`).
  * **Output:**
    ```text
    7 ditemukan di indeks 1
    Perbandingan: 2
    ```
* **Kasus 2 (Cari 99 pada array `[12, 7, 30, 7, 18, 4]`):**
  * Seluruh 6 elemen diperiksa satu per satu dan tidak ada yang cocok.
  * Nilai `posisi` tetap `-1`.
  * **Output:**
    ```text
    99 tidak ditemukan
    Perbandingan: 6
    ```

---

## 2. Hands-on 2 (Menengah): Cari Nama di Daftar Hadir (`handson2-nama.cpp`)

### Deskripsi Soal
Mencari seluruh posisi nama mahasiswa pada daftar hadir berukuran $n$ yang sama persis dengan kata kunci. Posisi dimulai dari 1 (1-based index). Tampilkan setiap posisi dan total kemunculannya. Jika nama tidak terdaftar, tampilkan `"Tidak ada"`.

### Perbedaan Teknis dengan Pencarian Tunggal
1. **Menghilangkan `break`:** Agar perulangan terus berjalan sampai elemen terakhir untuk mendeteksi duplikasi nama.
2. **Pencacah (`banyak`):** Menghitung frekuensi kemunculan.
3. **Konversi Indeks:** Menggunakan `i + 1` karena daftar hadir menggunakan penomoran manusia berbasis 1.

### Kode Solusi
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string nama[50], kunci;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> nama[i];
    cin >> kunci;

    int banyak = 0;
    // Linear search tanpa break untuk menemukan semua kemunculan (1-based index)
    for (int i = 0; i < n; i++) {
        if (nama[i] == kunci) {
            cout << "posisi " << i + 1 << endl;
            banyak++;
        }
    }

    if (banyak == 0) {
        cout << "Tidak ada" << endl;
    } else {
        cout << "muncul " << banyak << " kali" << endl;
    }

    return 0;
}
```

### Hasil Uji
* **Masukan:** `7 Rani Budi Siti Rani Andi Rani Doni Rani`
* **Output:**
  ```text
  posisi 1
  posisi 4
  posisi 6
  muncul 3 kali
  ```
* **Uji Kasus Tidak Ditemukan (`kunci = Joko`):**
  ```text
  Tidak ada
  ```

---

## 3. Hands-on 3 (Tantangan): Perbaiki Binary Search (`handson3-biner.cpp`)

### Deskripsi Soal
Diberikan array terurut 10 elemen: `3, 8, 15, 21, 34, 42, 57, 66, 79, 90` (indeks 0–9). Mencari nilai 90, 21, dan 50 dengan hasil yang diharapkan:
* `90 -> indeks 9`
* `21 -> indeks 3`
* `50 -> tidak ditemukan`

### Trace Table

#### Trace Table Pencarian $x = 90$
| Langkah | `low` | `high` | `mid` | `a[mid]` | Keputusan / Aksi |
| :---: | :---: | :---: | :---: | :---: | :---|
| 1 | 0 | 9 | 4 | 34 | $34 < 90$, cari di kanan: `low = mid + 1` $\rightarrow 5$ |
| 2 | 5 | 9 | 7 | 66 | $66 < 90$, cari di kanan: `low = mid + 1` $\rightarrow 8$ |
| 3 | 8 | 9 | 8 | 79 | $79 < 90$, cari di kanan: `low = mid + 1` $\rightarrow 9$ |
| 4 | 9 | 9 | 9 | 90 | $90 == 90$, elemen cocok! Ditemukan di **indeks 9** |

#### Trace Table Pencarian $x = 21$
| Langkah | `low` | `high` | `mid` | `a[mid]` | Keputusan / Aksi |
| :---: | :---: | :---: | :---: | :---: | :---|
| 1 | 0 | 9 | 4 | 34 | $34 > 21$, cari di kiri: `high = mid - 1` $\rightarrow 3$ |
| 2 | 0 | 3 | 1 | 8 | $8 < 21$, cari di kanan: `low = mid + 1` $\rightarrow 2$ |
| 3 | 2 | 3 | 2 | 15 | $15 < 21$, cari di kanan: `low = mid + 1` $\rightarrow 3$ |
| 4 | 3 | 3 | 3 | 21 | $21 == 21$, elemen cocok! Ditemukan di **indeks 3** |

#### Trace Table Pencarian $x = 50$ (Kasus Tidak Ditemukan)
| Langkah | `low` | `high` | `mid` | `a[mid]` | Keputusan / Aksi |
| :---: | :---: | :---: | :---: | :---: | :---|
| 1 | 0 | 9 | 4 | 34 | $34 < 50$, cari di kanan: `low = mid + 1` $\rightarrow 5$ |
| 2 | 5 | 9 | 7 | 66 | $66 > 50$, cari di kiri: `high = mid - 1` $\rightarrow 6$ |
| 3 | 5 | 6 | 5 | 42 | $42 < 50$, cari di kanan: `low = mid + 1` $\rightarrow 6$ |
| 4 | 6 | 6 | 6 | 57 | $57 > 50$, cari di kiri: `high = mid - 1` $\rightarrow 5$ |
*Setelah langkah 4, nilai `low` (6) > `high` (5). Perulangan berhenti, nilai 50 **tidak ditemukan**.*

### Penjelasan 3 Kesalahan Kode Asal
1. **Kesalahan 1 (Kondisi Berhenti Loop):**  
   Kode asal menggunakan `while (low < high)`. Ini salah karena saat rentang menyempit hingga `low == high`, masih ada satu elemen yang belum diperiksa. Akibatnya, elemen yang terletak di indeks paling ujung (seperti $x = 90$ pada indeks 9) tidak akan pernah terperiksa. Kondisi yang benar adalah `while (low <= high)`.
2. **Kesalahan 2 (Arah Pergeseran Batas Ruang Pencarian):**  
   Pada percabangan `else if (a[mid] < x)`, kode asal menulis `high = mid - 1;` dan pada bagian `else` menulis `low = mid + 1;`. Logika ini terbalik: jika nilai tengah `a[mid]` lebih kecil dari target $x$, target pasti berada di sebelah kanan sehingga batas bawah yang harus dimajukan (`low = mid + 1`). Sebaliknya jika `a[mid] > x`, target berada di kiri sehingga `high = mid - 1`.
3. **Kesalahan 3 (Penetapan Indeks Ditemukan):**  
   Kode asal menulis `posisi = mid + 1;` yang menghasilkan indeks berbasis 1 (1-based). Karena array pada C++ berbasis 0 (0-indexed), penugasan yang benar adalah `posisi = mid;`.

### Kode Solusi
```cpp
#include <iostream>
using namespace std;

int main() {
    const int N = 10;
    int a[N] = {3, 8, 15, 21, 34, 42, 57, 66, 79, 90};
    int cari[3] = {90, 21, 50};
    for (int k = 0; k < 3; k++) {
        int x = cari[k], low = 0, high = N - 1, posisi = -1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (a[mid] == x) {
                posisi = mid;
                break;
            } else if (a[mid] < x) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        if (posisi != -1) cout << x << " -> indeks " << posisi << endl;
        else cout << x << " -> tidak ditemukan" << endl;
    }
    return 0;
}
```

### Hasil Uji
```text
90 -> indeks 9
21 -> indeks 3
50 -> tidak ditemukan
```

---

## 4. Bonus (Pengayaan): Komparasi Linear Search vs Binary Search (`bonus-banding.cpp`)

### Deskripsi Soal
Diberikan array 100 bilangan ganjil pertama: $1, 3, 5, \dots, 199$ ($a[i] = 2i + 1$). Untuk nilai uji $x \in \{1, 99, 199, 200\}$, hitung banyak perbandingan yang dilakukan oleh Linear Search dan Binary Search.

### Kode Solusi
```cpp
#include <iostream>
using namespace std;

int main() {
    int a[100];
    for (int i = 0; i < 100; i++) a[i] = 2 * i + 1;
    int uji[4] = {1, 99, 199, 200};

    for (int k = 0; k < 4; k++) {
        int x = uji[k];

        // Linear Search
        int banding_linear = 0;
        for (int i = 0; i < 100; i++) {
            banding_linear++;
            if (a[i] == x) {
                break;
            }
        }

        // Binary Search
        int banding_binary = 0;
        int low = 0, high = 99;
        while (low <= high) {
            banding_binary++;
            int mid = (low + high) / 2;
            if (a[mid] == x) {
                break;
            } else if (a[mid] < x) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        cout << x << ": linear " << banding_linear << ", binary " << banding_binary << endl;
    }

    return 0;
}
```

### Hasil Uji
```text
1: linear 1, binary 6
99: linear 50, binary 1
199: linear 100, binary 7
200: linear 100, binary 7
```

### Analisis Hasil Komparasi
1. **Nilai $x = 1$:**  
   * Linear Search sangat cepat (1 perbandingan) karena elemen target berada tepat di awal array (*best-case* linear).
   * Binary Search membutuhkan 6 perbandingan untuk menyempitkan ruang pencarian dari tengah menuju tepi kiri.
2. **Nilai $x = 99$:**  
   * Elemen 99 berada tepat di tengah array ($i = 49$, karena $2 \times 49 + 1 = 99$).
   * Binary Search hanya butuh 1 langkah (*best-case* binary).
   * Linear Search harus menelusuri 50 elemen dari indeks 0 sampai 49.
3. **Nilai $x = 199$ (Elemen Terakhir):**  
   * Linear Search memeriksa semua 100 data (*worst-case* linear).
   * Binary Search hanya membutuhkan 7 langkah ($\lceil \log_2 100 \rceil = 7$).
4. **Nilai $x = 200$ (Tidak Ditemukan):**  
   * Linear Search harus memeriksa seluruh 100 elemen sebelum menyimpulkan data tidak ada.
   * Binary Search berhenti hanya dalam 7 langkah pembagian interval.

---

## 5. Pertanyaan Evaluasi & Pemahaman Konseptual

1. **Mengapa variabel posisi awal diinisialisasi dengan nilai `-1`?**  
   *Jawaban:* Pada bahasa C++, indeks array adalah bilangan bulat non-negatif ($0, 1, 2, \dots, N-1$). Nilai `-1` bukan merupakan indeks yang valid dalam rentang array, sehingga secara universal digunakan sebagai *sentinel value* (penanda khusus) bahwa elemen yang dicari belum atau tidak ditemukan.

2. **Berapa banyak perbandingan yang dibutuhkan Linear Search untuk mencari elemen terakhir dari $N$ data?**  
   *Jawaban:* Tepat $N$ perbandingan. Karena Linear Search menelusuri data berurutan dari indeks 0, elemen terakhir di indeks $N-1$ baru akan ditemukan setelah seluruh elemen sebelumnya diperiksa.

3. **Apa prasyarat mutlak sebelum algoritma Binary Search dapat dijalankan?**  
   *Jawaban:* Kumpulan data **wajib sudah terurut** (*sorted*), baik menaik (*ascending*) maupun menurun (*descending*). Jika data acak, asumsi pemotongan separuh ruang pencarian (kiri atau kanan) menjadi tidak valid dan dapat melewatkan elemen yang dicari.

4. **Mengapa syarat perulangan Binary Search adalah `low <= high` dan bukan `low < high`?**  
   *Jawaban:* Ketika `low == high`, rentang pencarian masih menyisakan tepat 1 elemen pada indeks tersebut. Jika menggunakan `low < high`, loop akan langsung berhenti sebelum elemen terakhir ini sempat dibandingkan dengan nilai target.

5. **Kira-kira berapa langkah maksimum yang dibutuhkan Binary Search untuk mencari data di antara 1.000 elemen dan 1.000.000 elemen?**  
   *Jawaban:*  
   * Untuk $N = 1.000$: $\approx \lceil \log_2 1.000 \rceil = 10$ langkah.  
   * Untuk $N = 1.000.000$: $\approx \lceil \log_2 1.000.000 \rceil = 20$ langkah.
