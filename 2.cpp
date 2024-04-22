/*2) Realizar una mejora al programa anterior con las siguientes condiciones
Sabiendo que las elecciones son el 30 de septiembre,
Menor de 16 años no puede votar
Mayor de 16 años (inclusive) y menor de 18 años puede votar
Mayor de 18 años (inclusive) y menor de 80 años debe votar
Mayor de 80 años (inclusive) puede votar*/

#include <stdio.h>
char nombre [150], apellido [150];
int dni, dia, anio, mes, anio_v=2024, dia_v=30, mes_v=9;
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
	
	if(edad<16){
		printf("Nombre:%s, Apellido:%s, Edad: %d DNI:%d", nombre, apellido, edad, dni);
		printf("\nEl usuario no puede votar");
	}
	else if(edad>=16 && edad<18){
		printf("Nombre:%s, Apellido:%s, Edad: %d DNI:%d", nombre, apellido, edad, dni);
		printf("\nEl usuario puede votar");
	}
	else if (edad>=18 && edad<80) {
		printf("Nombre:%s, Apellido:%s, Edad: %d DNI:%d", nombre, apellido, edad, dni);
		printf("\nEl usuario debe votar obligatoriamente");
	}
	else if(edad>=80){
		printf("Nombre:%s, Apellido:%s, Edad: %d DNI:%d", nombre, apellido, edad, dni);
		printf("\nEl usuario puede votar");
	}
}
