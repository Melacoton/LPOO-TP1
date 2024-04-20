#include <stdio.h>
int N, i, cont=0, cont2=0, contp=0, contnp=0;
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
	for(i=1;i<=N;i++){
		if(lista[i] % i == 0){
			cont2++;
		}
		if(cont2 > 2){
		contp++;
	}
	else{
		contnp++;
	}
	}
	printf("\nLa cantidad de numeros ingresada es %d", cont);
	printf("\nLa cantidad de numeros no primos es %d", contp);
	printf("\nLa cantidad de numeros primos es %d", contnp);
}