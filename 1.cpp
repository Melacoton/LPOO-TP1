#include <stdio.h>
char nombre [150], apellido [150];
int dni, dia, anio, mes, anio_v=2024;
int main(){
	printf("Ingrese el nombre: ");
	scanf("%s", & nombre);
	
	printf("Ingrese el apellido: ");
	scanf("%s", & apellido);
	
	printf("Ingrese la fecha de nacimiento (dd/mm/yyy): ");
	scanf("%d/%d/%d", &dia, &mes, &anio);
	
	printf("Ingrese el numero de DNI: ");
	scanf("%d", & dni);
	
	int edad = anio_v-anio;
	
	if(edad>=16){
		printf("Nombre:%s, Apellido:%s, DNI:%d", nombre, apellido, dni);
		printf("\nEl usuario puede votar");
	}
	else{
		printf("\nEl usuario no puede votar");
	}
	
}
