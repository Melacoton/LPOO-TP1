#include <stdio.h>
int num, cont=0, i;
main(){
	printf("Ingrese un numero: ");
	scanf("%d", & num);
	
	for(i=1;i<=num;i++){
		if(num % i == 0){
			cont++;
		}
	}
	if(cont > 2){
		printf("El numero no es primo");
	}
	else{
		printf("El numero es primo");
	}
}


