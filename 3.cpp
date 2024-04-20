#include <stdio.h>
#include <math.h>
int cateto1, cateto2, hipotenusa;
main(){
	printf("Ingrese cateto 1: ");
	scanf("%d", & cateto1);
	
	printf("Ingrese cateto 2: ");
	scanf("%d", & cateto2);
	
	hipotenusa = sqrt(cateto1+cateto1 + cateto2*cateto2);
	
	printf("\nEl valor de su hipotenusa es %d", hipotenusa);
}
