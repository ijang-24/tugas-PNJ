#include <iostream>
using namespace std;

int main()
{
    int nilai; 
    cout << "masukkan nilai : ";
    cin >> nilai;
    
    if (nilai >= 85) 
    {
        cout << "nilai anda A bosq" << endl;
    } 
    else if (nilai >= 75) // Hapus titik koma di sini
    {
        cout << "nilai anda B bosq" << endl;
    }
    else if (nilai >= 65) // Hapus titik koma di sini
    {
        cout << " nilai lu jelek bgt anjing" << endl;
    } 
    else if (nilai >= 50) // Hapus titik koma di sini
    {
        cout << "salah jurusan ya?" << endl;
    }
    
    return 0;
}
