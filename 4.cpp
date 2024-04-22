/*4) Realizar una modificación al programa anterior, para el ingreso de dos de cualquiera de sus
lados, y me devuelva el valor de sus catetos y de su hipotenusa*/

#include <stdio.h>
#include <math.h>
int opcion, hipotenusa, cateto, cateto2;
main(){
	printf("Ingresar cateto + cateto2");
	printf("\nIngresar cateto + hipotenusa");
	printf("\nIngresar cateto2 + hipotenusa");
	printf("\nIndique la opcion que desee realizar (1,2,3): ");
	scanf("%d", & opcion);
	
switch (opcion){
	case 1:
		printf("\nIngrese el cateto: ");
		scanf("%d", &cateto);
		printf("\nIngrese el cateto2: ");
		scanf("%d", &cateto2);
		hipotenusa = sqrt(cateto*cateto + cateto2*cateto2);
	break;
	
	case 2:
		printf("\nIngrese el cateto: ");
		scanf("%d", &cateto);
		printf("\nIngrese la hipotenusa: ");
		scanf("%d", &hipotenusa);
		cateto2= sqrt(hipotenusa*hipotenusa - cateto*cateto);
	break;
	
	case 3:
		printf("\nIngrese el cateto2: ");
		scanf("%d", &cateto2);
		printf("\nIngrese la hipotenusa: ");
		scanf("%d", &hipotenusa);
		cateto= sqrt(hipotenusa*hipotenusa - cateto2*cateto2);
	break;
}
printf("\nEl valor de la hipotenusa es: %d", hipotenusa);
printf("\nEl valor del cateto es: %d", cateto);
printf("\nEl valor del cateto 2 es: %d", cateto2);
}
