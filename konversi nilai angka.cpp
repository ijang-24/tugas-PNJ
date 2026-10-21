#include <iostream>
using namespace std;

int main()
{
    float nilai;

    cout << "Masukkan nilai angka: ";
    cin >> nilai;

    if (nilai >= 85)
    {
        cout << "Nilai Huruf: A" << endl;
    }
    else if (nilai >= 75)
    {
        cout << "Nilai Huruf: B+" << endl;
    }
    else if (nilai >= 65)
    {
        cout << "Nilai Huruf: B" << endl;
    }
    else if (nilai >= 55)
    {
        cout << "Nilai Huruf: C+" << endl;
    }
    else if (nilai >= 45)
    {
        cout << "Nilai Huruf: C" << endl;
    }
    else
    {
        cout << "Nilai Huruf: D" << endl;
    }

    system("pause");
    return 0;
}
