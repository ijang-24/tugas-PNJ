#include <iostream>
#include <utility>

int main() {
    int a, b;

    std::cout << "Masukkan nilai A: ";
    std::cin >> a;

    std::cout << "Masukkan nilai B: ";
    std::cin >> b;

    std::cout << "Sebelum ditukar: A = " << a << ", B = " << b << '\n';

    std::swap(a, b);

    std::cout << "Setelah ditukar: A = " << a << ", B = " << b << '\n';

    return 0;
}	
