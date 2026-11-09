#include <iostream>
using namespace std;

double HitungPajak(double hargaPembelian)
{
    double pajak;
    pajak = hargaPembelian * 10 / 100;
    return pajak;
}

int main()
{
    double harga, pajak;

    cout << "Masukkan harga pembelian makanan: ";
    cin >> harga;

    pajak = HitungPajak(harga);

    cout << "Pajak pembelian makanan: " << pajak << endl;
    return 0;
}
