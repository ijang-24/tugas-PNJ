#include <iostream>
using namespace std;

void TampilkanTanda(int n)
{
    char tanda;

    if (n % 2 == 0)
        tanda = '*';
    else
        tanda = '#';

    for (int i = 1; i <= n; i++)
        cout << tanda;

    cout << endl;
}

int main()
{
    int n;

    cout << "Masukkan nilai n: ";
    cin >> n;

    TampilkanTanda(n);
    return 0;
}
