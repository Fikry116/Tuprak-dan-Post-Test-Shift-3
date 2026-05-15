#include <iostream>
using namespace std;

int main() {
    int pilihan;
    float r, sisi, panjang, lebar, alas, tinggi, luas;
    const float PI = 3.14159; 

menu_utama:
    cout << "=======================================\n";
    cout << "      PROGRAM PENGHITUNG LUAS BANGUN\n";
    cout << "=======================================\n";
    cout << "1. Lingkaran\n";
    cout << "2. Segitiga\n";
    cout << "3. Persegi\n";
    cout << "4. Persegi Panjang\n";
    cout << "5. Jajargenjang\n";
    cout << "---------------------------------------\n";
    cout << "Pilih menu (1-5): ";
    cin >> pilihan;

    switch (pilihan) {
        case 1:
            cout << "Input Jari-jari: ";
            cin >> r;
            luas = PI * r * r;
            cout << "Luas Lingkaran: " << luas << "\n";
            break;
            
        case 2:
            cout << "Input Alas: ";
            cin >> alas;
            cout << "Input Tinggi: ";
            cin >> tinggi;
            luas = 0.5 * alas * tinggi;
            cout << "Luas Segitiga: " << luas << "\n";
            break;
            
        case 3:
            cout << "Input Sisi: ";
            cin >> sisi;
            luas = sisi * sisi;
            cout << "Luas Persegi: " << luas << "\n";
            break;
            
        case 4:
            cout << "Input Panjang: ";
            cin >> panjang;
            cout << "Input Lebar: ";
            cin >> lebar;
            luas = panjang * lebar;
            cout << "Luas Persegi Panjang: " << luas << "\n";
            break;
            
        case 5:
            cout << "Input Alas: ";
            cin >> alas;
            cout << "Input Tinggi: ";
            cin >> tinggi;
            luas = alas * tinggi;
            cout << "Luas Jajargenjang: " << luas << "\n";
            break;
            
        default:
            cout << "\n[ERROR] Kode yang Anda masukkan salah!\nSilakan coba lagi.\n\n";
            goto menu_utama;
    }
    cout << "\n---------------------------------------\n";
    return 0;
}