#include <iostream>
using namespace std;

int main()
{
    int DETIK = 7425;
    int JAM, MENIT;

  
    JAM = DETIK / 3600;   // Menghitung jam dan sisa detik dengan operator modulo (%)
    DETIK = DETIK % 3600;


    MENIT = DETIK / 60;     // menghitung menit dan sisa detik terakhir
    DETIK = DETIK % 60;

    cout << "JAM   : " << JAM << endl;
    cout << "MENIT : " << MENIT << endl;
    cout << "DETIK : " << DETIK << endl;

    system("pause");
    return 0;
}
