# Lembar Jawaban Latihan Pertemuan 10: Array Dua Dimensi dan String
**Mata Kuliah:** IF25-11001 Algoritma Pemrograman  
**Program Studi:** Teknik Informatika - Institut Teknologi Sumatera  

---

## Identitas Mahasiswa
* **Nama:** [Isi Nama Anda]
* **NIM:** [Isi NIM Anda]
* **Nilai A:** [Digit terakhir NIM; jika 0 gunakan A = 5]
* **Nilai B:** [Digit kedua dari belakang NIM; jika 0 gunakan B = 3]

> *Catatan: Pada jawaban di bawah ini, nilai disajikan secara umum dalam parameter $A$ dan $B$ serta contoh nilai konkrit jika menggunakan nilai default $A = 5$ dan $B = 3$.*

---

## Tingkat 1: Dasar (5 Menit) - SUB-CPMK 10.2

### Soal 1.1
Diberikan matriks `mat[3][4]`:
```text
baris 0: (A, 2, 7, 1)
baris 1: (4, B, 0, 6)
baris 2: (3, 5, 8, 9)
```

1. **Isi elemen matriks:**
   * **`mat[1][1]`** = **B** (jika $B = 3$, maka bernilai **3**).  
     *Alasan:* Berada pada baris indeks ke-1 dan kolom indeks ke-1.
   * **`mat[0][2]`** = **7**.  
     *Alasan:* Berada pada baris indeks ke-0 dan kolom indeks ke-2.
   * **`mat[2][3]`** = **9**.  
     *Alasan:* Berada pada baris indeks ke-2 dan kolom indeks ke-3.

2. **Indeks baris dan kolom yang sah:**
   * **Indeks baris yang sah:** `0, 1, 2` (total 3 baris).  
     *Alasan:* Matriks memiliki 3 baris dengan pengindeksan berbasis 0 (rentang 0 hingga $3 - 1$).
   * **Indeks kolom yang sah:** `0, 1, 2, 3` (total 4 kolom).  
     *Alasan:* Matriks memiliki 4 kolom dengan pengindeksan berbasis 0 (rentang 0 hingga $4 - 1$).

---

### Soal 1.2
Diberikan string `s` = `"INFORMATIKA"`.

* **`LENGTH(s)`** = **11**.  
  *Alasan:* Kata `"INFORMATIKA"` memiliki panjang total 11 karakter.
* **`s[0]`** = **'I'**.  
  *Alasan:* Karakter pertama pada string berbasis indeks 0 adalah `'I'`.
* **`s[A]`**:
  * Pemetaan indeks string `"INFORMATIKA"`:
    | Indeks | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 |
    | :---: | :-: | :-: | :-: | :-: | :-: | :-: | :-: | :-: | :-: | :-: | :-: |
    | Karakter | I | N | F | O | R | M | A | T | I | K | A |
  * Untuk default **$A = 5$**, maka **`s[5]`** = **'M'** (sesuaikan dengan nilai $A$ Anda).  
  *Alasan:* Operasi pengindeksan mengambil karakter tunggal pada posisi ke-$A$.
* **`SUBSTRING(s, 2, 4)`** = **"FORM"** *(asumsi format standar: `SUBSTRING(teks, indeks_awal, panjang)`)*.  
  *Alasan:* Mengambil 4 karakter berturut-turut dimulai dari indeks ke-2 (karakter indeks 2, 3, 4, dan 5).  
  *(Catatan alternatif: Jika format yang diajarkan adalah indeks akhir non-inklusif `[start, end)`, hasilnya `"FO"`; jika inklusif, `"FOR"`).*

---

## Tingkat 2: Menengah (8 Menit) - SUB-CPMK 10.1

### Soal 2.1
Total setiap baris dan total setiap kolom pada matriks `mat`.

#### Pseudocode:
```text
ALGORITMA TotalBarisDanKolom
KAMUS
    mat : array [0..2][0..3] of integer
    i, j, total_baris, total_kolom : integer
ALGORITMA
    // Total per baris
    UNTUK i ← 0 SAMPAI 2
        total_baris ← 0
        UNTUK j ← 0 SAMPAI 3
            total_baris ← total_baris + mat[i][j]
        TULIS "Total Baris ", i, " = ", total_baris

    // Total per kolom
    UNTUK j ← 0 SAMPAI 3
        total_kolom ← 0
        UNTUK i ← 0 SAMPAI 2
            total_kolom ← total_kolom + mat[i][j]
        TULIS "Total Kolom ", j, " = ", total_kolom
```
*Alasan:* Perulangan bersarang mengunci satu dimensi dan menjumlahkan elemen di dimensi lainnya.

#### Hasil:
* **Total Baris:**
  * Baris 0: $A + 2 + 7 + 1 = \mathbf{A + 10}$ *(untuk $A=5 \rightarrow \mathbf{15}$)*
  * Baris 1: $4 + B + 0 + 6 = \mathbf{B + 10}$ *(untuk $B=3 \rightarrow \mathbf{13}$)*
  * Baris 2: $3 + 5 + 8 + 9 = \mathbf{25}$
* **Total Kolom:**
  * Kolom 0: $A + 4 + 3 = \mathbf{A + 7}$ *(untuk $A=5 \rightarrow \mathbf{12}$)*
  * Kolom 1: $2 + B + 5 = \mathbf{B + 7}$ *(untuk $B=3 \rightarrow \mathbf{10}$)*
  * Kolom 2: $7 + 0 + 8 = \mathbf{15}$
  * Kolom 3: $1 + 6 + 9 = \mathbf{16}$

---

### Soal 2.2
Pseudocode menghitung konsonan dalam string `s` dan trace untuk `"INFORMATIKA"`.

#### Pseudocode:
```text
ALGORITMA HitungKonsonan
KAMUS
    s : string
    n, i, jumlah_konsonan : integer
    c : character
ALGORITMA
    jumlah_konsonan ← 0
    n ← LENGTH(s)
    UNTUK i ← 0 SAMPAI n - 1
        c ← UPPERCASE(s[i])
        JIKA (c >= 'A' DAN c <= 'Z') DAN 
             (c ≠ 'A' DAN c ≠ 'I' DAN c ≠ 'U' DAN c ≠ 'E' DAN c ≠ 'O') MAKA
            jumlah_konsonan ← jumlah_konsonan + 1
    TULIS "Jumlah konsonan: ", jumlah_konsonan
```
*Alasan:* Mengiterasi string karakter per karakter dan mencacah hanya huruf alfabet yang bukan vokal.

#### Trace untuk `"INFORMATIKA"`:
| $i$ | $s[i]$ | Kategori | Kondisi Terpenuhi? | `jumlah_konsonan` |
| :-: | :----: | :------: | :----------------: | :---------------: |
| 0 | 'I' | Vokal | Tidak | 0 |
| 1 | 'N' | Konsonan | Ya | 1 |
| 2 | 'F' | Konsonan | Ya | 2 |
| 3 | 'O' | Vokal | Tidak | 2 |
| 4 | 'R' | Konsonan | Ya | 3 |
| 5 | 'M' | Konsonan | Ya | 4 |
| 6 | 'A' | Vokal | Tidak | 4 |
| 7 | 'T' | Konsonan | Ya | 5 |
| 8 | 'I' | Vokal | Tidak | 5 |
| 9 | 'K' | Konsonan | Ya | 6 |
| 10 | 'A' | Vokal | Tidak | 6 |

* **Hasil akhir:** **6 konsonan** (N, F, R, M, T, K).  
  *Alasan:* Dari 11 karakter terdapat 5 vokal (I, O, A, I, A) dan 6 konsonan.

---

## Tingkat 3: Tantangan (7 Menit) - SUB-CPMK 10.2

### Soal 3.1
Diberikan algoritma transpos in-place matriks `m[3][3]`:
```text
UNTUK i ← 0 SAMPAI 2
    UNTUK j ← 0 SAMPAI 2
        temp ← m[i][j]
        m[i][j] ← m[j][i]
        m[j][i] ← temp
```

1. **Trace Singkat:**
   * $i = 0, j = 1$: elemen `m[0][1]` (2) ditukar dengan `m[1][0]` (4).
   * $i = 0, j = 2$: elemen `m[0][2]` (3) ditukar dengan `m[2][0]` (7).
   * $i = 1, j = 2$: elemen `m[1][2]` (6) ditukar dengan `m[2][1]` (8).
   * Namun saat iterasi mencapai $i = 1, j = 0$: elemen `m[1][0]` dan `m[0][1]` **ditukar kembali** ke posisi semula.
   * Begitu juga saat $i = 2, j = 0$ dan $i = 2, j = 1$, semua pasangan tertukar kembali ke asal.

2. **Penyebab:**
   * Terjadi **pertukaran ganda (*double swap*)**, karena perulangan variabel $j$ berjalan dari 0 sampai 2 melewati seluruh elemen matriks, sehingga setiap pasangan $(i, j)$ dan $(j, i)$ ditukar dua kali dan saling membatalkan.  
   *Alasan:* Operasi swap yang dijalankan dua kali pada pasangan nilai yang sama akan mengembalikan nilainya ke keadaan semula.

3. **Perbaikan Pseudocode:**
   Batasi perulangan kolom $j$ hanya pada area segitiga atas matriks ($j$ dimulai dari $i + 1$):
```text
UNTUK i ← 0 SAMPAI 1
    UNTUK j ← i + 1 SAMPAI 2
        temp ← m[i][j]
        m[i][j] ← m[j][i]
        m[j][i] ← temp
```
*Alasan:* Menjalankan kolom $j$ dari $i + 1$ menjamin setiap pasangan simetris non-diagonal hanya ditukar tepat satu kali.

---

## Pengayaan - SUB-CPMK 10.1

### Soal P
Memeriksa apakah dua kata adalah anagram (contoh: `"BARU"` dan `"RABU"`) menggunakan array pencacah berukuran 26 huruf.

#### Pseudocode:
```text
ALGORITMA CekAnagram
KAMUS
    kata1, kata2 : string
    count : array [0..25] of integer
    i, idx : integer
    is_anagram : boolean
ALGORITMA
    JIKA LENGTH(kata1) ≠ LENGTH(kata2) MAKA
        TULIS "Bukan Anagram (Panjang berbeda)"
    SELAIN ITU
        // Inisialisasi frekuensi dengan 0
        UNTUK i ← 0 SAMPAI 25
            count[i] ← 0

        // Hitung frekuensi karakter (tambah untuk kata1, kurang untuk kata2)
        UNTUK i ← 0 SAMPAI LENGTH(kata1) - 1
            idx ← ORD(UPPERCASE(kata1[i])) - ORD('A')
            count[idx] ← count[idx] + 1

            idx ← ORD(UPPERCASE(kata2[i])) - ORD('A')
            count[idx] ← count[idx] - 1

        // Verifikasi semua selisih bernilai 0
        is_anagram ← TRUE
        UNTUK i ← 0 SAMPAI 25
            JIKA count[i] ≠ 0 MAKA
                is_anagram ← FALSE

        JIKA is_anagram MAKA
            TULIS "Kedua kata adalah Anagram"
        SELAIN ITU
            TULIS "Kedua kata Bukan Anagram"
```
*Alasan:* Jika kedua kata adalah anagram, penambahan frekuensi huruf dari kata pertama akan diimbangi secara tepat oleh pengurangan frekuensi dari kata kedua sehingga seluruh elemen array pencacah bernilai 0.
