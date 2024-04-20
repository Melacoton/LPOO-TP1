#include <stdio.h>
#include <math.h>
int cateto1, cateto2, hipotenusa, opcion, seguir;
main(){
	do{
	printf("Eliga una opcion (1, 2, 3): ");
	scanf("%d", & opcion);
		switch(opcion){
			case 1:
			printf("Ingrese cateto 1: ");
			scanf("%d", & cateto1);
			printf("Ingrese cateto 2: ");
			scanf("%d", & cateto2);
			hipotenusa = sqrt(cateto1+cateto1 + cateto2*cateto2);
			printf("\nEl valor del cateto 1 es: %d", cateto1);
			printf("\nEl valor del cateto 2 es: %d", cateto2);
			printf("\nEl valor de la hipotenusa es: %d", hipotenusa);
			break;
			
			case 2:
			printf("Ingrese cateto 1: ");
			scanf("%d", & cateto1);
			
			printf("Ingrese la hipotenusa: ");
			scanf("%d", & hipotenusa);
			
			cateto2= sqrt(hipotenusa*hipotenusa - cateto1*cateto1);
			printf("\nEl valor del cateto 1 es: %d", cateto1);
			printf("\nEl valor del cateto 2 es: %d", cateto2);
			printf("\nEl valor de la hipotenusa es: %d", hipotenusa);
			break;
			
			case 3:
			printf("Ingrese cateto 2: ");
			scanf("%d", & cateto2);
			
			printf("Ingrese la hipotenusa: ");
			scanf("%d", & hipotenusa);
			
			cateto1= sqrt(hipotenusa*hipotenusa - cateto2*cateto2);
			printf("\nEl valor del cateto 1 es: %d", cateto1);
			printf("\nEl valor del cateto 2 es: %d", cateto2);
			printf("\nEl valor de la hipotenusa es: %d", hipotenusa);
			break;
		}
		printf("\nSi desea seguir operando ingrese 1 de lo contrario indique 0");
		scanf("%d", & seguir);
	}
	while(seguir==1);
	
}