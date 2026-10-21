#include <iostream>
#include <string>

using namespace std;

int main() {
    char kode;
    int uang, harga;
    string namaMinuman;

    // Menampilkan menu minuman
    cout << "=== Mesin Minuman Otomatis ===" << endl;
    cout << "A. Kopi      - Rp 8.000" << endl;
    cout << "B. Teh       - Rp 5.000" << endl;
    cout << "C. Cokelat   - Rp 10.000" << endl;
    cout << "==============================" << endl;

    // Meminta input kode minuman dari pengguna
    cout << "Masukkan kode minuman (A/B/C): ";
    cin >> kode;

    // Menentukan harga dan nama minuman berdasarkan kode
    if (kode == 'A' || kode == 'a') {
        namaMinuman = "Kopi";
        harga = 8000;
    } else if (kode == 'B' || kode == 'b') {
        namaMinuman = "Teh";
        harga = 5000;
    } else if (kode == 'C' || kode == 'c') {
        namaMinuman = "Cokelat";
        harga = 10000;
    } else {
        cout << "Kode minuman tidak valid!" << endl;
        return 0; 
    }

    // Meminta input jumlah uang dari pengguna
    cout << "Masukkan jumlah uang: Rp ";
    cin >> uang;

    // Mengecek apakah uang cukup atau tidak
    if (uang < harga) {
        cout << "Uang tidak cukup" << endl;
    } else {
        cout << "Transaksi Berhasil!" << endl;
        cout << "Anda membeli " << namaMinuman << "." << endl;
        
        // Menghitung dan menampilkan kembalian jika ada
        if (uang > harga) {
            cout << "Kembalian Anda: Rp " << uang - harga << endl;
        }
    }

    return 0;
}
