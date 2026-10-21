#include <iostream>
using namespace std;

int main() 
{
    int nilai;
    cout << "Masukkan nilai : ";
    cin >> nilai;

    if (nilai > 85) {
        cout << "Nilai A" << endl;
    } else if (nilai > 70) {
        cout << "Nilai B" << endl;
    } else if (nilai > 55) {
        cout << "Nilai C" << endl;
    } else if (nilai > 40) {
        cout << "Nilai D" << endl;
    } else {
        cout << "Nilai E" << endl;
    }
}
