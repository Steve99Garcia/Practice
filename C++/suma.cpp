#include<stdio.h>  //Libreria

#define PI 3.1416 //Macro

int y = 5; // variable global

int main(){
	
	int x = 10;//variable global
	
	float suma = 0;
	
	suma = PI + x ;
	
	printf("La suma es: %f",suma);
	
	return 0;
}
