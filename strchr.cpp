#include <cstdlib>
#include <iostream>
#include <string.h>

using namespace std;

int main () 
{
    cout << "Nama : Muhammad Rizky Pratama";
    char nama [30] = "Muhammad Rizky Pratama";
    char dicari = 'R';
    char *hasil;
    cout<<endl;
    hasil=strchr    (nama, dicari);
    cout<<endl;
    cout<<hasil<<"dimulai dari huruf "<<dicari<<endl;
    
}
