<div align="center">

# 📚 C-Learn: C++ Programming & Algoritma

[![Language](https://img.shields.io/badge/Language-C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](https://isocpp.org/)
[![Platform](https://img.shields.io/badge/Platform-Linux%20%7C%20Windows%20%7C%20macOS-lightgrey?style=for-the-badge)](https://github.com/Snzy09/C-Learn)
[![License](https://img.shields.io/badge/License-MIT-green.svg?style=for-the-badge)](LICENSE)
[![GitHub stars](https://img.shields.io/github/stars/Snzy09/C-Learn?style=for-the-badge&color=gold)](https://github.com/Snzy09/C-Learn/stargazers)
[![GitHub forks](https://img.shields.io/github/forks/Snzy09/C-Learn?style=for-the-badge&color=blue)](https://github.com/Snzy09/C-Learn/network/members)

<p align="center">
  <b>Koleksi kode sumber, latihan praktikum, dan implementasi algoritma pemrograman C++</b><br>
  Dibuat dan dikembangkan oleh <b>M Ikhsan Candra Putra</b> (<a href="https://github.com/Snzy09">@Snzy09</a>)
</p>

---

</div>

## 📌 Tentang Repositori

**C-Learn** adalah repositori komprehensif yang mendokumentasikan perjalanan pembelajaran bahasa pemrograman **C++** dan materi **Algoritma Pemrograman** di Institut Teknologi Sumatera (ITERA). 

Repositori ini tersusun secara modular berdasarkan pertemuan praktikum (P1 – P10), mencakup konsep paling dasar seperti *Standard I/O*, struktur percabangan (*conditional branching*), perulangan (*looping*), pola bentuk 2 dimensi (*nested loops*), manipulasi array 1 dimensi (statistik, pergeseran elemen, frekuensi), hingga array 2 dimensi (matriks) dan pengolahan *string*.

---

## 📑 Daftar Isi

- [Fitur Utama](#-fitur-utama)
- [Struktur Repositori](#-struktur-repositori)
- [Detail Modul & Pertemuan](#-detail-modul--pertemuan)
  - [P1: Pengenalan & Basic I/O](#p1-pengenalan--basic-io)
  - [P2: Format Output & ASCII Art](#p2-format-output--ascii-art)
  - [P3: Operator Aritmatika & Logika](#p3-operator-aritmatika--logika)
  - [P4: Struktur Percabangan (If-Else & Switch)](#p4-struktur-percabangan-if-else--switch)
  - [P5: Perulangan (Loops)](#p5-perulangan-loops)
  - [P6: Nested Loops & Pola Bintang (Patterns)](#p6-nested-loops--pola-bintang-patterns)
  - [P9: Array Satu Dimensi & Operasinya](#p9-array-satu-dimensi--operasinya)
  - [P10: Array Dua Dimensi & String](#p10-array-dua-dimensi--string)
- [Tech Stack & Prasyarat](#-tech-stack--prasyarat)
- [Cara Instalasi & Menjalankan Program](#-cara-instalasi--menjalankan-program)
- [Panduan Kompilasi Singkat](#-panduan-kompilasi-singkat)
- [Lisensi](#-lisensi)

---

## ✨ Fitur Utama

- 🧩 **Modular & Rapi:** Setiap pertemuan dipisahkan ke dalam folder mandiri (`P1`, `P2`, dst.).
- 🎯 **Konsep Bertahap:** Dari pemula (dasar sintaksis) hingga menengah (algoritma manipulasi array dan matriks).
- 💡 **Contoh Nyata & Aplikatif:** Mencakup studi kasus nyata seperti kalkulator menu kasir, konversi grade, cek tahun kabisat, game tebak angka, rotasi array, hingga transpos matriks *in-place*.
- 📝 **Disertai Dokumentasi & Trace:** Dilengkapi dengan lembar analisis algoritma, penelusuran (*dry-run / trace*), dan pseudocode.

---

## 📁 Struktur Repositori

```text
C-Learn/
├── LICENSE
├── README.md
├── P1/
│   └── main.cpp                     # Pengenalan I/O dan input nama
├── P2/
│   └── ktm.cpp                      # Format tampilan kartu tanda mahasiswa & ASCII art
├── P3/
│   ├── diskon_barang.cpp            # Perhitungan harga dengan diskon 10%
│   ├── kalkulator.cpp               # Kalkulator 5 operator aritmatika & cek modulus
│   ├── konversi_suhu.cpp            # Konversi Celcius ke Fahrenheit & Kelvin
│   ├── luas_keliling.cpp            # Hitung luas & keliling persegi panjang
│   └── sisa_bagi.cpp                # Penentuan bilangan ganjil/genap via modulo
├── P4/
│   ├── day_month.cpp                # Konversi angka ke nama hari dan bulan
│   ├── If-Else Sederhana.cpp        # Logika dasar percabangan if-else
│   ├── kalkulator_belanja.cpp       # Perhitungan belanja dengan skema diskon bertingkat
│   ├── kalkulator_menu.cpp          # Aplikasi kalkulator berbasis menu interaktif CLI
│   ├── konversi_nilai_ke_grade.cpp  # Konversi skor angka (0-100) ke huruf mutu (A-E)
│   ├── pengecekan_peringkat.cpp     # Evaluasi nilai dan pemeringkatan performa
│   └── tahun_kabisat_checker.cpp    # Algoritma validasi tahun kabisat (Leap Year)
├── P5/
│   ├── easy.cpp                     # Pengenalan struktur perulangan dasar
│   ├── faktorial.cpp                # Perhitungan nilai faktorial (n!) menggunakan loop
│   ├── fibonaci.cpp                 # Generator deret angka Fibonacci
│   ├── kalkulator_loop.cpp          # Kalkulator interaktif dengan looping do-while
│   ├── rata_rata.cpp                # Perhitungan nilai rata-rata dari n data dinamis
│   ├── tebak_angka.cpp              # Game interaktif tebak angka acak dengan feedback
│   └── validasi_nilai_and_ranking.cpp # Validasi rentang input nilai dan penentuan peringkat
├── P6/
│   ├── diamond_pattern.cpp          # Pola belah ketupat (diamond) simetris
│   ├── floyds_triangle.cpp          # Segitiga angka berurutan (Floyd's Triangle)
│   ├── hollow_squere.cpp            # Pola persegi berongga (hollow square)
│   ├── persegi_bintang.cpp          # Grid persegi bintang solid (n x n)
│   ├── piramid_terbalik.cpp         # Piramida bintang terbalik
│   ├── segitiga_angka.cpp           # Pola piramida setengah angka
│   └── segitiga_terbalik.cpp        # Pola segitiga siku-siku bintang terbalik
├── P9/
│   ├── bonus-frekuensi.cpp          # Algoritma pencacah frekuensi kemunculan elemen array
│   ├── handson1_nilai.cpp           # Input, penyimpanan, dan penampilan daftar nilai siswa
│   ├── handson2-statistik.cpp       # Analisis statistik array (Total, Mean, Min, Max)
│   └── handson3-geser.cpp           # Algoritma pergeseran / rotasi siklis elemen array
└── P10/
    ├── bonus-palindrom.cpp          # Pengecekan kata palindrom dari dua ujung string
    ├── handson1-matriks.cpp         # Penginputan matriks 2D dan perhitungan total per baris
    ├── handson2-kata.cpp            # Analisis teks (panjang, vokal, kata, dan konversi kapital)
    ├── handson3-transpos.cpp        # Perbaikan transposisi matriks 3x3 dan jumlah diagonal utama
    └── answer.md                    # Dokumentasi lengkap: lembar jawaban latihan, modul, & hands-on
```

---

## 📖 Detail Modul & Pertemuan

### P1: Pengenalan & Basic I/O
Fokus pada sintaks paling mendasar dalam C++, penggunaan pustaka standar `<iostream>`, serta stream masukan/keluaran (`std::cin`, `std::cout`, `std::getline`).

### P2: Format Output & ASCII Art
Eksplorasi pembentukan teks berformat di terminal, manipulasi karakter baris baru (`\n`, `std::endl`), pembuatan tata letak kartu identitas mahasiswa (KTM), dan seni ASCII terminal.

### P3: Operator Aritmatika & Logika
Mempelajari operator matematika dasar (`+`, `-`, `*`, `/`, `%`), operasi perbandingan (`<`, `>`, `==`, `!=`), serta operator logika (`&&`, `||`). Program di folder ini mencakup konversi suhu, kalkulator diskon, dan perhitungan geometri persegi panjang.

### P4: Struktur Percabangan (If-Else & Switch)
Mengimplementasikan alur kontrol keputusan:
- `if`, `else if`, `else`: Digunakan pada penentuan grade nilai, kalkulator belanja, dan validasi tahun kabisat (aturan habis dibagi 4, tidak habis dibagi 100, atau habis dibagi 400).
- `switch-case`: Digunakan pada pemilihan menu kalkulator interaktif dan pemetaan kalender (hari dan bulan).

### P5: Perulangan (Loops)
Pendalaman penggunaan struktur perulangan `for`, `while`, dan `do-while`:
- Akumulator & Deret: Menghitung faktorial ($n!$), deret Fibonacci, dan rata-rata data.
- User Interaction: Kalkulator yang terus berjalan hingga pengguna memilih keluar, serta permainan tebak angka acak dengan petunjuk *"terlalu besar"* atau *"terlalu kecil"*.

### P6: Nested Loops & Pola Bintang (Patterns)
Latihan logika pemetaan koordinat baris ($i$) dan kolom ($j$) untuk menghasilkan bentuk-bentuk 2D di konsol:
- Persegi solid dan berongga (*hollow square*).
- Segitiga siku-siku, segitiga terbalik, dan piramida terbalik.
- Pola diamond simetris dan Segitiga Floyd (*Floyd's Triangle*).

### P9: Array Satu Dimensi & Operasinya
Implementasi struktur data array 1 dimensi untuk pemrosesan sekumpulan data bertipe seragam:
- **Statistik:** Menghitung total, nilai rata-rata, nilai tertinggi (*maximum*), dan nilai terendah (*minimum*).
- **Pergeseran Siklis (*Circular Shift*):** Memindahkan posisi elemen array ke kanan/kiri secara efisien.
- **Frekuensi Elemen:** Melacak jumlah kemunculan setiap angka dalam kumpulan data.

### P10: Array Dua Dimensi & String
Pemahaman konseptual dan algoritma lanjut mengenai tabel (matriks) dan teks:
- Penjumlahan per baris dan per kolom pada matriks.
- Transposisi matriks *in-place* dengan optimasi batas segitiga atas ($j = i + 1$) untuk mencegah *double swap*.
- Penelusuran string karakter demi karakter (menghitung huruf vokal/konsonan).
- Perancangan algoritma verifikasi anagram menggunakan array pencacah frekuensi berukuran 26 karakter ($O(N)$).

---

## 💻 Tech Stack & Prasyarat

- **Bahasa:** C++ (Standar C++11 ke atas direkomendasikan)
- **Kompiler:** `g++` (GCC), `clang++`, atau MSVC
- **Build Tool:** GNU Make / CLI langsung
- **Sistem Operasi:** Linux, macOS, atau Windows (via MinGW / WSL)

---

## ⚙️ Cara Instalasi & Menjalankan Program

### 1. Clone Repositori
```bash
git clone https://github.com/Snzy09/C-Learn.git
cd C-Learn
```

### 2. Pilih Program yang Ingin Dijalankan
Masuk ke direktori pertemuan yang diinginkan, kompilasi menggunakan `g++`, lalu eksekusi berkas binernya:

#### Contoh 1: Menjalankan Program P3 (Kalkulator)
```bash
cd P3
g++ kalkulator.cpp -o kalkulator
./kalkulator
```

#### Contoh 2: Menjalankan Program P5 (Game Tebak Angka)
```bash
cd P5
g++ tebak_angka.cpp -o tebak_angka
./tebak_angka
```

#### Contoh 3: Menjalankan Program P6 (Pola Diamond Bintang)
```bash
cd P6
g++ diamond_pattern.cpp -o diamond
./diamond
```

#### Contoh 4: Menjalankan Program P9 (Statistik Array)
```bash
cd P9
g++ handson2-statistik.cpp -o statistik
./statistik
```

---

## 🚀 Panduan Kompilasi Singkat

Bagi pengguna Linux / macOS / Git Bash, Anda dapat mengompilasi file manapun langsung dari root repositori dengan satu baris perintah:

```bash
g++ P9/handson3-geser.cpp -o geser && ./geser
```

---

## 📄 Lisensi

Proyek ini dilisensikan di bawah **[MIT License](LICENSE)**. Anda bebas menggunakan, memodifikasi, dan mendistribusikan kode ini untuk keperluan pembelajaran.

---

<div align="center">

Dibuat dengan oleh **[M Ikhsan Candra Putra](https://github.com/Snzy09)**  
*Teknik Informatika — Institut Teknologi Sumatera (ITERA)*

⭐ **Give Star!** ⭐

</div>
