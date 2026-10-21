#include <iostream>
using namespace std;

int main()
{
    int bil1;
    cout << "masukkan bilangan : " ;
    cin >> bil1;

    if (bil1 %2 == 0) {
        cout << bil1 << " adalah bilangan genap" << endl;
    } else {
        cout << bil1 << " adalah bilangan ganjil" << endl;
    }
}
