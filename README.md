# C-Learn 📚

A repository dedicated to learning and practicing my C++ programming.

## Description

This repository, named "C-Learn", to save all my project when learn C++.

## Table of Contents 

- [Project Title & Badges](#project-title--badges)
- [Description](#description)
- [Table of Contents](#table-of-contents)
- [Features](#features) ✨
- [Tech Stack](#tech-stack) 💻
- [Installation](#installation) ⚙️
- [Usage](#usage) 🚀
- [Project Structure](#project-structure) 📁
- [License](#license) 📄
- [Important Links](#important-links) 🔗
- [Footer](#footer) 

## Features ✨

- **Basic Input/Output:** Demonstrates how to take user input and display output using `iostream`.
- **String Manipulation:** Includes examples of reading and processing strings.
- **Basic Arithmetic Operations:** Implements addition, subtraction, multiplication, division, and modulus.
- **Conditional Logic:** Utilizes `if-else` structures and ternary operators for decision-making.
- **Data Type Conversions:** Shows how to convert between different data types and perform temperature conversions.
- **Geometric Calculations:** Calculates the area and perimeter of rectangles.
- **Pattern Drawing:** Includes examples of drawing simple ASCII art patterns.
- **Discount Calculation:** Implements logic for calculating discounts based on total purchase amount.
- **Odd/Even Number Check:** Determines if a given number is odd or even.

## Tech Stack 💻

- **Language:** C++
- **Standard Libraries:** `iostream`

## Installation ⚙️

This project does not require a complex installation process as it primarily consists of C++ source files. To run any of the programs:

1.  **Prerequisites:** You need a C++ compiler installed on your system (e.g., g++).
    *   **Ubuntu/Debian:** `sudo apt update && sudo apt install build-essential g++`
    *   **Fedora:** `sudo dnf groupinstall "Development Tools" && sudo dnf install gcc-c++`
    *   **macOS (with Homebrew):** `brew install gcc`
    *   **Windows:** Install MinGW-w64 or use an IDE like Visual Studio with C++ support.

2.  **Clone the Repository:**
    ```bash
    git clone https://github.com/Snzy09/C-Learn.git
    cd C-Learn
    ```

3.  **Compile and Run:** Navigate to the directory containing the desired `.cpp` file and compile it using your C++ compiler. For example, to compile and run `P1/main.cpp`:
    ```bash
    cd P1
    g++ main.cpp -o main
    ./main
    ```
    
    Repeat this process for other `.cpp` files in their respective directories (e.g., `P2/ktm.cpp`, `P3/kalkulator.cpp`).

## Usage 🚀

This repository contains small, independent C++ programs that demonstrate various programming concepts. Each `.cpp` file can be compiled and run individually to see its specific output.

**Examples:**

-   **`P1/main.cpp`:** A simple program that asks for your name and greets you.
    ```bash
    g++ P1/main.cpp -o main_greeting
    ./main_greeting
    ```
    *Sample Interaction:*
    ```
    Siapa Nama kamu: [Your Name]
    Halo [Your Name]! Selamat datang
    ```

-   **`P2/ktm.cpp`:** Displays various ASCII art patterns, including a simple diagram, a star pattern, and a cat face.
    ```bash
    g++ P2/ktm.cpp -o ascii_art
    ./ascii_art
    ```
    *This will print the ASCII art directly to the console.*

-   **`P3/diskon_barang.cpp`:** Calculates the total price of items and applies a 10% discount if the total is 50,000 or more.
    ```bash
    g++ P3/diskon_barang.cpp -o discount_calculator
    ./discount_calculator
    ```
    *Sample Interaction:*
    ```
    Input nama barang: Buku
    Input Harga barang: 20000
    Input jumlah barang: 3
    Nama barang: Buku Dengan harga: 20000 Berjumlah: 3 Harga Total: 54000
    ```

-   **`P3/kalkulator.cpp`:** A basic calculator that performs addition, subtraction, multiplication, division, and modulus operations on two input numbers. It also checks if the first number is greater than the second, if the remainder of division is zero, and if the numbers are odd or even.
    ```bash
    g++ P3/kalkulator.cpp -o calculator
    ./calculator
    ```
    *Sample Interaction:*
    ```
    Input Angka 1: 10
    Input Angka 2: 5
    Penjumlahan: 15
    Pengurangan: 5
    Perkalian: 50
    Pembagian: 2
    Modulus: 0
    ==============================================================
    Sisa Bagi adalah 0 ? Iya Karna sisa bagi bernilai: 2
    ==============================================================
    Apakah angka 1 lebih besar ? Iya Karna angka 1 adalah: 10 dan angka 2 adalah: 5
    ==============================================================
    Bonus Challange! Apakah hasil penjumlahan lebih dari 100 dan perkalian lebih dari 50: Salah satu atau keduanya tidak memenuhi
    ==============================================================
    Apakah Angka 1 bilangan ganjil: Angka 1 Merupakan Bilangan Genap
    Apakah Angka 2 bilangan ganjil: Angka 2 Merupakan Bilangan Ganjil
    ==============================================================
    Create By M Ikhsan Candra Putra
    ```

-   **`P3/konversi_suhu.cpp`:** Converts a temperature from Celsius to Fahrenheit and Kelvin.
    ```bash
    g++ P3/konversi_suhu.cpp -o temp_converter
    ./temp_converter
    ```
    *Sample Interaction:*
    ```
    Input suhu dalam celcius: 25
    ======= Konversi Suhu =======
    Fahrenheit:    77
    Kelvin:    298.15
    =============================
    Create By M Ikhsan Candra Putra
    ```

-   **`P3/luas_keliling.cpp`:** Calculates the area and perimeter of a rectangle given its length and width.
    ```bash
    g++ P3/luas_keliling.cpp -o rectangle_calculator
    ./rectangle_calculator
    ```
    *Sample Interaction:*
    ```
    Input Panjang: 10
    Input Lebar: 5
    Luas Persegi panjang: 50
    Keliling Persegi Panjang: 30
    Create By M Ikhsan Candra Putra
    ```

-   **`P3/sisa_bagi.cpp`:** Takes an integer input and determines if it's an odd or even number based on the remainder when divided by 2.
    ```bash
    g++ P3/sisa_bagi.cpp -o remainder_checker
    ./remainder_checker
    ```
    *Sample Interaction:*
    ```
    Input nilai: 7
    Sisa bagi adalah: 1 Berupa Bilangan Ganjil
    Create By M Ikhsan Candra Putra
    ```

## How to use

This repository is a collection of educational C++ programs. To use it:

1.  **Identify a concept you want to learn:** Browse the `P1`, `P2`, and `P3` directories to find programs related to specific C++ features (e.g., input/output, calculations, conversions).
2.  **Compile the code:** Use a C++ compiler (like g++) to compile the chosen `.cpp` file.
3.  **Run the executable:** Execute the compiled program to observe its behavior and understand the C++ concepts it demonstrates.

This is an excellent resource for beginners to experiment with fundamental C++ programming elements.

## Project Structure 📁

```
C-Learn/
├── LICENSE
├── P1/
│   └── main.cpp
├── P2/
│   └── ktm.cpp
└── P3/
│   ├── diskon_barang.cpp
│   ├── kalkulator.cpp
│   ├── konversi_suhu.cpp
│   ├── luas_keliling.cpp
│   └── sisa_bagi.cpp
└── P4/
    ├── day_month.cpp
    ├── If-Else Sederhana.cpp
    ├── kalkulator_belanja.cpp
    ├── kalkulator_menu.cpp
    ├── konversi_nilai_ke_grade.cpp
    ├── pengecekan_peringkat.cpp
    └── tahun_kabisat_checker.cpp
```

-   **`LICENSE`**: Contains the license information for the project.
-   **`P1/`**: Contains a basic C++ program demonstrating introductory concepts.
-   **`P2/`**: Contains a program focused on displaying ASCII art.
-   **`P3/`**: Contains a collection of programs demonstrating various functionalities like calculations, conversions, and conditional logic.

## License 📄

This project is licensed under the **MIT License**.

## Important Links 🔗

-   **Repository:** [https://github.com/Snzy09/C-Learn](https://github.com/Snzy09/C-Learn)

## Footer 

© 2026 C-Learn. All rights reserved.

[![](https://img.shields.io/github/stars/Snzy09/C-Learn?style=social)](https://github.com/Snzy09/C-Learn)
[![](https://img.shields.io/github/forks/Snzy09/C-Learn?style=social)](https://github.com/Snzy09/C-Learn)

---
**<p align="center">Generated by [ReadmeCodeGen](https://www.readmecodegen.com/)</p>**
