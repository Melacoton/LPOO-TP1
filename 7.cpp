
#include <stdio.h>
int num, resto, valor, acum=0, acum_par=0, acum_impar=0;
main(){
	do{
	printf("Ingrese el número: ");
	scanf("%d", & num);
	acum=acum+1;
	resto=num%2;
	
	if(resto==0)
	{ acum_par=acum_par+1;
              printf("El numero es par. La cantidad de numeros pares ingrersada es:  %d", acum_par);	
	}
	else if(resto>0){
	acum_impar=acum_impar+1;
	printf("El numero es impar. La cantidad de numeros impares ingresada es: %d", acum_impar);
	}
	printf("\nLa cantidad total de números ingresada es %d", acum);
	printf("\n Si desea ingresar mas números indique 1 de lo contrario indique 0");
	scanf("%d", & valor);
	}
	while(valor==1);
}

