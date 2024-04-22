/*7) Dada una lista de números informar
a) la cantidad de números ingresada
b) la cantidad de números que son pares
c) la cantidad de números que son impares*/
#include <stdio.h>
int i, n, cont00, par=0, impar=0; 
main(){
	printf("Ingrese la cantidad de valores: ");
	scanf("%d", & n);
	
	int lista[n];
	
	for(i=0;i<n;i++){
		printf("\nIngrese el valor %d:", i+1);
		scanf("%d", & lista[i]);
	}
	
	for(i=0;i<n;i++){
		if(lista[i]%2 ==0){
			par++;
		}
		else{
			impar++;
		}
	}
	printf("\nLa cantidad de numeros ingresada es %d", n);
	printf("\nLa cantidad de numeros par ingresada es %d", par);
	printf("\nLa cantidad de numeros impar ingresada es %d", impar);

}
