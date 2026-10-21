#include <iostream>
using namespace std;

int main() {
    int jenis_kendaraan, lama_parkir, biaya;

    cout << "=	Sistem Perhitungan Biaya Parkir" << endl;
    cout << "Pilih Jenis Kendaraan:" << endl;
    cout << "1. Motor" << endl;
    cout << "2. Mobil" << endl;
    cout << "Masukkan pilihan (1/2): ";
    cin >> jenis_kendaraan;

    cout << "Masukkan lama parkir (jam): ";
    cin >> lama_parkir;

    // Validasi input
    if (lama_parkir <= 0) {
        cout << "Lama parkir tidak valid!" << endl;
        return 0;
    }

    // Perhitungan biaya berdasarkan jenis kendaraan
    if (jenis_kendaraan == 1) {
        if (lama_parkir <= 2) {
            biaya = 2000;
        } else {
            biaya = 2000 + ((lama_parkir - 2) * 1000);
        }
        cout << "Total biaya parkir Motor Anda: Rp" << biaya << endl;
        
    } else if (jenis_kendaraan == 2) {
        if (lama_parkir <= 2) {
            biaya = 5000;
        } else {
            biaya = 5000 + ((lama_parkir - 2) * 2000);
        }
        cout << "Total biaya parkir Mobil Anda: Rp" << biaya << endl;
        
    } else {
        cout << "Pilihan jenis kendaraan tidak valid!" << endl;
    }

    return 0;
}
