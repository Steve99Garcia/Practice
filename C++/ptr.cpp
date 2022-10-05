#include<iostream>

using namespace std;
using std::cout;
using std::endl;
int a;

int main()

{int*aPtr;// aPtr es un int*--apuntador a un entero
a=7; //se asigna 7 a la variable a
aPtr=&a;//se asigna la direccion de a a aPtr 
cout<<"La direccion de a es "<<&a<<
"\nEl valor de aPtr" <<aPtr;
cout<<"\n El valor de *aPtr es"<<*aPtr;
cout<<"\nEl valor de aPtr" <<*aPtr;
cout<<"\n Indemostracion que * y & so inversos "<<
"Uno del otro.\n&*aPtr="<<&*aPtr<<"\n&*aPtr="
<<*&aPtr<<endl;
return 0;

	
}	
