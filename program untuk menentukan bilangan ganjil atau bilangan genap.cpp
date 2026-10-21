#include <iostream>
using namespace std;

int main()
{
    int bil;

    cout << "masukkan sebuah bilangan bulat : ";
    cin >> bil;

    if (bil % 2 == 0)
    {
        cout << "Bilangan " << bil << " adalah bilangan GENAP" << endl;
    }
    else
    {
        cout << "Bilangan " << bil << " adalah bilangan GANJIL" << endl;
    }

    system("pause");
    return 0;
}
