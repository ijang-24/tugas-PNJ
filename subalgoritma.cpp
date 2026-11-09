#include <iostream>
using namespace std;

int Nil1 = 5, Nil2 = 8;

void Hitung(int A, int B, int *HasilJumlah, int *HasilKurang,
            int *HasilKali, double *HasilBagi)
{
    *HasilJumlah = A + B;
    *HasilKurang = A - B;
    *HasilKali = A * B;

    *HasilBagi = 0;
    if (B != 0)
    {
        *HasilBagi = (A) / B;
    }
}

int main()
{
    int Jumlah, Kurang, Kali;
    double Bagi;

    Hitung(Nil1, Nil2, &Jumlah, &Kurang, &Kali, &Bagi);

    cout << "Penjumlahan: " << Jumlah << endl;
    cout << "Pengurangan: " << Kurang << endl;
    cout << "Perkalian: " << Kali << endl;

    if (Nil2 != 0)
    {
        cout << "Pembagian: " << Bagi << endl;
    }
    else
    {
        cout << "Pembagian: tidak bisa membagi dengan nol." << endl;
    }

    return 0;
}
