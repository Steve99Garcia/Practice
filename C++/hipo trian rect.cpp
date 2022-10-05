/* sacar la hipotenusa de un triangulo rectangulo
pidiendo al usuario el valor de los 2 catetos*/

#include<stdio.h>
#include<math.h>


int main(){
float hipotenusa, cateto1, cateto2;
	
	printf("Digitre los dos catetos");
	scanf("%f %f",&cateto1,&cateto2);
	
	hipotenusa = sqtr(pow(cateto1, 2)+ pow(cateto2, 2));
	printf("LA hipotenusa del tringulo es : %.2f",hipotenusa);
	
	return 0;
}
