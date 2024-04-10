
#include <stdio.h>
int main()
{
	char Nombre [150]; 
	char Apellido [150];
	char dni [11];
	int dia_v=30, mes_v=9, anio_v=2024;
	int dia, mes, anio;

	printf("\n Ingrese su Nombre: ");
	scanf("%s", & Nombre);
	printf("\n Ingrese su Apellido: ");
	scanf("%s", & Apellido);
	printf("\n Ingrese su número de dni: ");
	scanf("%s", & dni);
	printf("\n Ingrese su fecha de nacimiento (dd/mm/yyyy): ");
	scanf("%d/%d/%d", &dia, &mes, &anio);

           int edad = anio_v - anio; 
    
	if (edad<=16){
	printf("El usuario no pude votar");
	printf("\n Apellido: %s, Nombre: %s, DNI: %s", Apellido, Nombre, dni);
	}
	else if (edad>=16 && edad<18) {
	printf("El usuario puede votar sin obligación");
	printf("\n Apellido: %s, Nombre: %s, DNI: %s", Apellido, Nombre, dni);
	}
           else if (edad>=18 && edad<80){
	printf("El usuario debe votar obligatoriamente");
	printf("\n Apellido: %s, Nombre: %s, DNI: %s", Apellido, Nombre, dni);
	}
	else if (edad>=80){
	printf("El usuario puede votar sin obligación");
	printf("\n Apellido: %s, Nombre: %s, DNI: %s", Apellido, Nombre, dni);
	}
}

