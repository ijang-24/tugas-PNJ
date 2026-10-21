//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int jam, menit, detik, D;
//    cout << "masukkan jam : ";
//    cin >> jam;
//    cout << "masukkan menit : ";
//    cin >> menit;
//    cout << "masukkan detik : ";
//    cin >> detik; 
//    cout << endl;
//    
//    D = (jam * 3600) + (menit * 60) + detik;
//    cout << "hasil konversi ke detik : " << D << endl;
//
//}

#include <iostream>
using namespace std;

int main () 
{
    int jam, detik, menit;
    cout << "masukkan detik : ";
    cin >> detik;

    jam = detik / 3600;
    menit = (detik % 3600) / 60;
    detik = (detik % 3600) % 60;

    cout << "jam : " << jam << endl;
    cout << "menit : " << menit << endl;      
    cout << "detik : " << detik << endl;
    
}
	
	
	
	

