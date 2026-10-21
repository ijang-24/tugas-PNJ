#include <iostream>
using namespace std;

int main() {

    int JAM = 1;
    int MENIT = 5;
    int DETIK = 10;
    int D;

    // Instruksi untuk menghitung lama bekerja dalam satuan detik
    D = (JAM * 3600) + (MENIT * 60) + DETIK;

    // cout hasil
    cout << "JAM   = " << JAM << endl;
    cout << "MENIT = " << MENIT << endl;
    cout << "DETIK = " << DETIK << endl; 
    cout << "Total Lama Bekerja dalam Detik (D) = " << D << " detik" << endl;

    return 0;
}
