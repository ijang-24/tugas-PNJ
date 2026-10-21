#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <string.h>

using namespace std;

int main()
{
    char angka 1 [10], angka 2 [10];

    cout << "masukkan bilangan pertama : ";
    cin >> angka 1;

    cout << "masukkan bilangan kedua : ";
    cin >> angka 2;
    int hasil = strcmp(angka 1, angka 2);

    if hasil == 0
    {
        cout << "bilangan pertama sama dengan bilangan kedua" << endl;
    }
    else if hasil < 0
    {
        cout << "bilangan pertama lebih kecil dari bilangan kedua" << endl;
    }
    else
    {
        cout << "bilangan pertama lebih besar dari bilangan kedua" << endl;
    }
}