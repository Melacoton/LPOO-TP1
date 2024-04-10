
#include <stdio.h>
#include <math.h>
int cateto1, cateto2, hipotenusa;
main(){
	printf("Ingrese el valor del cateto 1: ");
	scanf("%d", & cateto1);
	printf("\n Ingrese el valor del cateto 2: ");
	scanf("%d", & cateto2);
	
hipotenusa= sqrt(cateto1*cateto1 + cateto2*cateto2);
printf("\n La hipotenusa es %d", hipotenusa);
}

