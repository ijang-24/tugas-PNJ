#include <iostream>
using namespace std;
int pangkat2( int x)
{int y;
 y = x*x;
 return y;
};

int main ()
{ int Bilangan, Hasil;
cout<<"Masukkan bilangan : ";
cin>> Bilangan;
Hasil = pangkat2(Bilangan);
cout <<"pangkat dua hari "<<Bilangan<<": "<<Hasil<<endl;

system ("pause");
return 0;
}
