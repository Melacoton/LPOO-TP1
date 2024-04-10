
#include <stdio.h>
#include <math.h>
int opcion, cateto1, cateto2, hipotenusa;
main(){
	printf("Indique el valor que desee ingresar (1, 2, o 3): ");
	printf("\n1- Cateto 1 y cateto 2");
	printf("\n2- Cateto 1 y hipotenusa");
	printf("\n3- Cateto 2 y hipotenusa: ");
	scanf("%d", & opcion);
	
	switch (opcion){
		case 1:
			printf("\nIngrese el valor del cateto 1: ");
			scanf("%d", & cateto1);
			printf("\nIngrese el valor del cateto : ");
			scanf("%d", & cateto2);
			hipotenusa = sqrt(cateto1*cateto1 + cateto2*cateto2);
		break;
		
		case 2:
			printf("\nIngrese el valor del cateto 1: ");
			scanf("%d", & cateto1);
			printf("\nIngrese el valor de la hipotenusa: ");
			scanf("%d", & hipotenusa);
			cateto2 = sqrt(hipotenusa*hipotenusa - cateto1*cateto1);
		break;
		
		case 3:
			printf("\nIngrese el valor del cateto 2: ");
			scanf("%d", & cateto2);
			printf("\nIngrese el valor de la hipotenusa: ");
			scanf("%d", & hipotenusa);
			cateto1 = sqrt(hipotenusa*hipotenusa - cateto2*cateto2);
		break;
	}
    printf("\nEl valor del cateto 1 es: %d", cateto1);
    printf("\nEl valor del cateto 2 es: %d", cateto2);
    printf("\nEl valor de la hipotenusa es: %d", hipotenusa);
}

