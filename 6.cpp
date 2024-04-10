
#include <stdio.h>
int num, acum=0, i, opcion, total=0, totalp=0, totalnp=0;
main(){
	do{
	acum=0;
	printf("Ingrese el numero que desea evaluar: ");
	scanf("%d", & num);	
	for(i = 1; i <= num; ++i) {
        if (num % i == 0) {
            acum++;
        }
    }
      if (num <= 1 || acum > 2) {
        printf("\nEl numero no es primo. ");
        totalnp=totalnp+1;
    } else {
        printf("\nEl numero es primo. ");
        totalp=totalp+1;
    }
    total=total+1;
    printf("\nSi desea seguir ingresando numeros ingrese 1 de lo contrario ingrese 0: ");
    scanf("%d", & opcion);
  } while(opcion==1);
    printf("\nLa cantidad total de numeros ingresada es %d", total),
    printf("\nEl total de numeros no primos es %d", totalnp);
    printf("\nEl total de numeros primos es %d", totalp);
     
}
