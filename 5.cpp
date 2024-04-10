
#include <stdio.h>
int num, resto, acum=0, i;
main(){
	printf("Ingrese el numero que desea evaluar: ");
	scanf("%d", & num);	
	for(i = 1; i <= num; ++i) {
        if (num % i == 0) {
            acum++;
        }
    }
      if (num <= 1 || acum > 2) {
        printf("\nEl numero no es primo");
    } else {
        printf("\nEl numero es primo");
    }
}

