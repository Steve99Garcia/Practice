#include<stdio.h>

#include <windows.h>

void clrscr()/*Creando funcion para limpiar pantalla.*/

{

HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);

COORD coord = {0, 0};

DWORD count;

CONSOLE_SCREEN_BUFFER_INFO csbi;

GetConsoleScreenBufferInfo(hStdOut, &csbi);

FillConsoleOutputCharacter(hStdOut, ' ', csbi.dwSize.X * csbi.dwSize.Y, coord, &count);

SetConsoleCursorPosition(hStdOut, coord);

}

void main()

{

int salir,saliryesno;

salir=0;

while(salir==0){

clrscr();/*Llamando la funcion para limpiar pantalla.*/

int cambiarmoneda;

float total_bill1,total_bill5,total_bill10,total_bill20,total_bill50,total_bill100,total_cent1,total_cent5,total_cent10,total_cent25,total_bill,total_cent,total_dinero,quetzal,lempira,euro;

printf("\nCantidad de billetes de un dolar: ");

scanf("%f",&total_bill1);

printf("Cantidad de billetes de cinco dolares: ");

scanf("%f",&total_bill5);

printf("Cantidad de billetes de diez dolares: ");

scanf("%f",&total_bill10);

printf("Cantidad de billetes de veinte dolares: ");

scanf("%f",&total_bill20);

printf("Cantidad de billetes de cincuenta dolares: ");

scanf("%f",&total_bill50);

printf("Cantidad de billetes de cien dolares: ");

scanf("%f",&total_bill100);

total_bill=(total_bill1*(1)+total_bill5*(5)+total_bill10*(10)+total_bill20*(20)+total_bill50*(50)+total_bill100*(100));

printf("Cantidad de monedas de un centavo: ");

scanf("%f",&total_cent1);

printf("Cantidad de monedas de cinco centavos: ");

scanf("%f",&total_cent5);

printf("Cantidad de monedas de diez centavos: ");

scanf("%f",&total_cent10);

printf("Cantidad de monedas de veinticinco: ");

scanf("%f",&total_cent25);

total_cent=(total_cent1*(0.01)+total_cent5*(0.05)+total_cent10*(0.10)+total_cent25*(0.25));

printf("\nLA CANTIDAD DE DINERO QUE HAY EN BILLETES ES: $%.2f\n",total_bill);

printf("LA CANTIDAD DE DINERO QUE HAY EN MONEDAS ES: $%.2f\n",total_cent);

total_dinero=(total_bill+total_cent);

printf("LA CANTIDAD TOTAL DE DINERO QUE HAY ES: $%.2f\n\n",total_dinero);

printf("\t\tMONEDA\t\tCODIGO\n");

printf("\t\tQuetzal\t\t 1\n");

printf("\t\tLempira\t\t 2\n");

printf("\t\tEuro\t\t 3\n\n");

printf("Introduzca el codigo de la moneda a la que desea convertir los $%.2f: ",total_dinero);

scanf("%d",&cambiarmoneda);

quetzal=total_dinero*7.95270;

lempira=total_dinero*19.71674;

euro=total_dinero*0.82396;

if(cambiarmoneda==1){

printf("\n$%.2f EQUIVALE A %.2f QUETZALES\n\n",total_dinero,quetzal);

printf("SI DESEA SALIR PRESIONE 1 O DE LO CONTRARIO PRESIONE OTRO NUMERO: ");

scanf("%d",&saliryesno);

if(saliryesno==1){

salir=1;

}

}

else{

if(cambiarmoneda==2){

printf("\n$%.2f EQUIVALE A %.2f LEMPIRAS\n\n",total_dinero,lempira);

printf("SI DESEA SALIR PRESIONE 1 O DE LO CONTRARIO PRESIONE OTRO NUMERO: ");

scanf("%d",&saliryesno);

if(saliryesno==1){

salir=1;

}

}

else{/*cambiarmoneda==3*/

printf("\n$%.2f EQUIVALE A %.2f EUROS\n\n",total_dinero,euro);

printf("SI DESEA SALIR PRESIONE 1 O DE LO CONTRARIO PRESIONE OTRO NUMERO: ");

scanf("%d",&saliryesno);

if(saliryesno==1){

salir=1;

}

}

}

}

}
