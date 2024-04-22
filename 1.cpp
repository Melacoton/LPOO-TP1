/*1) Se debe realizar un programa el cual se solicite la siguiente información al usuario
Nombre, Apellido, Fecha de nacimiento, y DNI. Y luego informe si puede o no votar y los
datos de Apellido, Nombre y DNI
Sabiendo que las elecciones son el 30 de septiembre, y pueden votar los mayores de 16 años*/

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
