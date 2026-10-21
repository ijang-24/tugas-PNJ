#include <iostream>
using namespace std;

int main() {
	// saya buat static jadi langsung menghasilkan hasil konversi tanpa input detik
    int Detik_total = 3915;
    int Jam, Menit, Detik;

    Jam = Detik_total / 3600;
 
    Menit = (Detik_total % 3600) / 60;

    Detik = (Detik_total % 3600) % 60;

	// cout output 
    cout << "Total Detik: " << Detik_total << endl;
    cout << "Hasil Konversi:" << endl;
    cout << "Jam   = " << Jam << endl;
    cout << "Menit = " << Menit << endl;
    cout << "Detik = " << Detik << endl;

    return 0;
}
