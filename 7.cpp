
#include <stdio.h>
int N, i, cont=0, cont2=0, par=0, impar=0;
int main(){
	printf("Ingrese la cantidad total de numeros: ");
	scanf("%d", & N);
	int lista[N];
	for(i=0;i<N;i++){
		printf("Ingrese el numero: ");
		scanf("%d", & lista[i]);
		cont++;
	}
	
	for(i=0;i<N;i++){
		printf("%d ", lista[i]);
	}
	for(i=0;i<N;i++){
		if(lista[i]%2==0){
		par++;
	}
	    else{
		impar++;
	}
	}
	printf("\nLa cantidad de numeros ingresada es %d", cont);
	printf("\nLa cantidad de numeros pares es %d", par);
	printf("\nLa cantidad de numeros impares es %d", impar);
}