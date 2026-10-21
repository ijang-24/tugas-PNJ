//#include <iostream>
//#include <conio.h>
//#include <string.h>
//#include <stdio.h>
//
//using namespace std;
//
//int main ()
//{
//	cout<<"fungsi fungsi C++";
//	cout<<"ini apaansih kontol";
//	getch();
//	char kata [100];
//	char kata2 [100];
//	gets(kata);
//	cout <<"panjang karakter : " <<strlen(kata)<<" karakter"<<endl;
//	strcpy (kata2, kata);
//	cout<<"kata yang disalin : "<<kata2<<endl;
//	strupr(kata);
//	cout<<"kata yang diubah menjadi huruf besar : "<<kata<<endl;
//    strlwr(kata);
//    cout<<"kata yang diubah menjadi huruf kecil : "<<kata<<endl;
//    strrev(kata);
//    cout<<"kata yang diubah menjadi huruf terbalik : "<<kata<<endl;
//    getch();
//}
//
//#include <cstdlib>
//#include <iostream>
//#include <string.h>
//
//using namespace std;
//
//int main()
//{
//    cout<<"nama : si kontol nyusahin anjing memek ngapain pake kertas " ;
//    char nama[] ="si kontol nyusahin anjing memek ngapain pake kertas";
//    char dicari = 'k';
//    char * hasil;
//    cout<<endl;
//    hasil=strchr(nama, dicari);
//    cout<<"hasil pencarian : "<<hasil<<endl;
//    
//}


#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <string.h>

using namespace std;

int main()
{
    char angka1 [10];
	char angka2 [10];

    cout << "masukkan bilangan pertama : ";
    cin >> angka1;

    cout << "masukkan bilangan kedua : ";
    cin >> angka2;
    int hasil = strcmp(angka1, angka2);

    if (hasil == 0)
    {cout<<"angka" <<angka1<<"sama dengan angka"<<angka2;}
    else if (hasil<0)
    {cout<<"angka"<<angka1<<"lebih kecil dari angka "<<angka2;}
    else
     {cout<<"angka"<<angka1<<"lebih besar dari angka"<<angka2;}
     
    system("pause");
	return 0;
}     
