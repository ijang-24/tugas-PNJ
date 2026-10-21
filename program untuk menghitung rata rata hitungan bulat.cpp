#include <iostream>

int main() {
    int jumlah;
    long long total = 0;

    std::cout << "Masukkan jumlah bilangan: ";
    std::cin >> jumlah;

    if (jumlah <= 0) {
        std::cout << "Jumlah bilangan harus lebih dari 0\n";
        return 1;
    }

    for (int i = 1; i <= jumlah; ++i) {
        int bilangan;
        std::cout << "Masukkan bilangan ke-" << i << ": ";
        std::cin >> bilangan;
        total += bilangan;
    }

    double rataRata = static_cast<double>(total) / jumlah; 
    std::cout << "Rata-rata: " << rataRata << '\n';

    return 0;
}
