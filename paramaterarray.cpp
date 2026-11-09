#include <iostream>
using namespace std;

void Isiarray(int A [], int N)
{
    for (int i = 0; i < N; i++)
    {
        cout << "Masukkan nilai ke-" << i + 1 << ": ";
        cin >> A[i];
    }
}

int main ()
{
    int Nilai[100];
    int size = 0;
    cout<<"Masukkan banyak elemen = ";
    cin>>size;
    Isiarray(Nilai, size);

    cout << "Isi array: ";
    for (int i = 0; i < size; i++)
    {
        cout << Nilai[i] << " ";
    }
    cout << endl;

    return 0;
}