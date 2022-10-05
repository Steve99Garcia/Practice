
#include <conio.h>
#include <iostream>
#include <cstdlib>
 
char P1[25],P2[25],P3[25],P4[25],P5[25];
float iva,desc,desc1,pr1,pr2,pr3,pr4,pr5,subtotal,total;
 
	using namespace std;
 
int main ()
 
{
 
cout << "///////////////BIENVENIDO AL ASISTENTE DE COMPRA///////////////"<<endl;
cout<<" "<<endl;
 
cout << "Por favor inserte los productos elegidos"<<endl;
cout << " "<<endl;
cout << "Primer producto"<<endl;
cin >> P1;
cout << "Precio del primer producto"<<endl;
cin >>pr1;
cout << "Segundo producto"<<endl;
cin >>P2;
cout << "Precio del segundo producto"<<endl;
cin >>pr2;
cout << "Tercer producto"<<endl;
cin >>P3;
cout << "Precio del tercer producto"<<endl;
cin >>pr3;
cout <<"Cuarto producto"<<endl;
cin >>P4;
cout << "Precio del cuarto producto"<<endl;
cin >>pr4;
cout <<"Quinto producto"<<endl;
cin >>P5;
cout << "Precio del quinto producto"<<endl;
cin >>pr5;
iva=pr1+pr2+pr3+pr4+pr5*0.12/100;
subtotal=pr1+pr2+pr3+pr4+pr5;
total=subtotal+iva;
 
system("cls");
 
cout <<"//////////////////////////FACTURA//////////////////////////"<<endl;
cout <<"////////               ABASTOS IUTCM              "<<endl;
cout <<"////////                                          "<<endl;
cout <<"////////                                          "<<endl;
cout <<"////////                                          "<<endl;
cout <<"////////  "<<P1<<"             "<<pr1<<" BsF      "<<endl;
cout <<"////////  "<<P2<<"             "<<pr2<<" BsF      "<<endl;
cout <<"////////  "<<P3<<"             "<<pr3<<" BsF      "<<endl;
cout <<"////////  "<<P4<<"             "<<pr3<<" BsF      "<<endl;
cout <<"////////  "<<P5<<"             "<<pr3<<" BsF      "<<endl;
cout <<"////////  "             "Subtotal :      "<<subtotal<<endl;
cout <<"////////  "                  "IVA :           "<<iva<<endl;
cout <<"////////                                          ////////"<<endl;
cout <<"////////                                          ////////"<<endl;
 
if (total >=3000)
{
	desc=total*0.05;
	desc1=total-desc;
	cout <<"Usted ha recibido un descuento del 5%, ahora el monto total es de : "<<desc1<<" BsF.";
}
 
system("pause");
}
