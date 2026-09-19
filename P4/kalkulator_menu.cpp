#include <iostream>
      using namespace std;                                                                                                                    
      // Nama : M Ikhsan C P
      // Nim  : 126140138
      int main() {                                                                                                                                     
          double num1, num2;                                                                                                                           
          int pilihan; 
          cout << "=== Kalkulator Sederhana ===" << endl;                                                                                              
          cout << "1. Tambah (+)" << endl;
          cout << "2. Kurang (-)" << endl;                                                                                                             
          cout << "3. Kali (*)" << endl;                                                                                                               
          cout << "4. Bagi (/)" << endl;                                                                                                               
          cout << "5. Modulus (%)" << endl;         
          cout << "============================" << endl;
          cout << "Pilih operasi (1-5): ";    
          
          cin >> pilihan; 
          cout << "============================" << endl;
          if (pilihan < 1 || pilihan > 5) {                                                                                                            
              cout << "Pilihan tidak valid!" << endl;                                                                                                  
              cout << "Create By Ikhsan" << endl;
              return 0;                                                                                                                                
          }                                                                                                                                            
          cout << "Masukkan angka pertama: ";                                                                                                          
          cin >> num1; 
          cout << "Masukkan angka kedua: ";
          cin >> num2;
          switch (pilihan) {
              case 1:
                  cout << "Hasil: " << num1 + num2 << endl;                                                                                            
                  break;
              case 2:
                  cout << "Hasil: " << num1 - num2 << endl;                                                                                            
                  break;
              case 3:
                  cout << "Hasil: " << num1 * num2 << endl;                                                                                            
                  break;                                                                                                                               
              case 4:  
                  if (num2 != 0) {                                                                                                                     
                      cout << "Hasil: " << num1 / num2 << endl;                                                                                        
                  } else {                                                                                                                             
                      cout << "Error: Pembagian dengan nol!" << endl;                                                                                  
                  }                                                                                                                                    
                  break;
              case 5:                                                                                                                                  
                  if (num2 != 0) {
                      cout << "Hasil: " << (int)num1 % (int)num2 << endl;                                                                              
                  } else {
                      cout << "Error: Modulus dengan nol!" << endl;                                                                                    
                  }                                                                                                                                    
                  break;                                                                                                                               
          }
          cout << "============================" << endl;
          cout << "Create By Ikhsan" << endl;
          return 0;
      }
