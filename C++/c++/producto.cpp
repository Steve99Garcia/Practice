#include <Stdio.h>

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



{

int salir,saliryesno;

salir=0;

while(salir==0){

clrscr();/*Llamando la funcion para limpiar pantalla.*/

int opt,uni,total;

printf("\t\tELIJA EL PRODUCTO DESEADO:\n\n");

printf("\t\tPRODUCTO\t\t\tCODIGO\n\n");

printf("\t\tCAMISA........................... 1\n");

printf("\t\tCINTURON......................... 2\n");

printf("\t\tZAPATOS.......................... 3\n");

printf("\t\tPANTALON......................... 4\n");

printf("\t\tCALCETINES....................... 5\n");

printf("\t\tFALDAS........................... 6\n");

printf("\t\tGORRAS........................... 7\n");

printf("\t\tSUETER........................... 8\n");

printf("\t\tCORBATA.......................... 9\n");

printf("\t\tCHAQUETA......................... 10\n\n");

printf("\t\tINTRODUZCA CODIGO: ");

scanf("%d",&opt,"\n");

while ((opt<1)||(opt>10))

{

printf(" CODIGO INCORRECTO. INTRODUZCA NUEVO CODIGO: ");

scanf("%d",&opt,"\r");

}

printf("\n");

if (opt==1){

printf("\t\tEL PRECIO ES: $20.00\n");

printf("\t\tINTRODUZCA NUMERO DE UNIDADES: ");

scanf("%d",&uni);

total=20*uni;

printf("\n\t\tEL TOTAL A PAGAR ES $%d.00\n\n",total);

}

else if (opt==2){

printf("\t\tEL PRECIO ES: $15.00\n");

printf("\t\tINTRODUZCA NUMERO DE UNIDADES: ");

scanf("%d",&uni);

total=15*uni;

printf("\n\t\tEL TOTAL A PAGAR ES $%d.00\n\n",total);

}

else if (opt==3){

printf("\t\tEL PRECIO ES: $60.00 \n");

printf("INTRODUZCA NUMERO DE UNIDADES: ");

scanf("%d",&uni);

total=60*uni;

printf("\n\t\tEL TOTAL A PAGAR ES $%d.00\n\n",total);

}

else if (opt==4){

printf("\t\tEL PRECIO ES: $30.00 \n");

printf("\t\tINTRODUZCA NUMERO DE UNIDADES: ");

scanf("%d",&uni);

total=30*uni;

printf("\n\t\tEL TOTAL A PAGAR ES $%d.00\n\n",total);

}

else if (opt==5){

printf("\t\tEL PRECIO ES: $7.00 \n");

printf("\t\tINTRODUZCA NUMERO DE UNIDADES: ");

scanf("%d",&uni);

total=7*uni;

printf("\n\t\tEL TOTAL A PAGAR ES $%d.00 \n\n",total);

}

else if (opt==6){

printf("\t\tEL PRECIO ES: $25.00 \n");

printf("\t\tINTRODUZCA NUMERO DE UNIDADES: ");

scanf("%d",&uni);

total=25*uni;

printf("\n\t\tEL TOTAL A PAGAR ES $%d.00\n\n",total);

}

else if (opt==7){

printf("\t\tEL PRECIO ES: $12.00 \n");

printf("\t\tINTRODUZCA NUMERO DE UNIDADES: ");

scanf("%d",&uni);

total=12*uni;

printf("\n\t\tEL TOTAL A PAGAR ES $%d.00\n\n",total);

}

else if (opt==8){

printf("\t\tEL PRECIO ES: $35.00 \n");

printf("\t\tINTRODUZCA NUMERO DE UNIDADES: ");

scanf("%d",&uni);

total=35*uni;

printf("\n\t\tEL TOTAL A PAGAR ES $%d.00\n\n",total);

}

else if (opt==9){

printf("\t\tEL PRECIO ES: $22.00 \n");

printf("\t\tINTRODUZCA NUMERO DE UNIDADES: ");

scanf("%d",&uni);

total=22*uni;

printf("\n\t\tEL TOTAL A PAGAR ES $%d.00\n\n",total);

}

else if(opt==10){

printf("\t\tEL PRECIO ES: $90.00 \n");

printf("\t\tINTRODUZCA NUMERO DE UNIDADES: ");

scanf("%d",&uni);

total=90*uni;

printf("\nEL TOTAL A PAGAR ES $%d.00\n\n",total);

}

printf("SI DESEA SALIR PRESIONE 1 O DE LO CONTRARIO PRESIONE OTRO NUMERO: ");

scanf("%d",&saliryesno);

if(saliryesno==1){

salir=1;

}

}

}


