#include <iostream>

int main() {
    int jumlahSiswa;

    std::cout << "Masukkan jumlah siswa: ";
    std::cin >> jumlahSiswa;

    for (int i = 1; i <= jumlahSiswa; ++i) {
        double nilai;

        std::cout << "Masukkan nilai siswa ke-" << i << ": ";  //disini saya buat multi input agar bisa menginput jumlah mahasiswa yang diinginkan
        std::cin >> nilai;

        if (nilai >= 60) {
            std::cout << "Siswa ke-" << i << ": Lulus\n";
        } else {
            std::cout << "Siswa ke-" << i << ": Tidak lulus\n";
        }
    }

    return 0;
}
	
