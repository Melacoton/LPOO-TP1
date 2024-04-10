#include <stdio.h>
int main()
{          char Nombre [150]; 
	char Apellido [150];
	char dni [11];
	int anio_v= 2024;
	int dia, mes, anio;

	printf("\n Ingrese su Nombre: ");
	scanf("%s", & Nombre);
	printf("\n Ingrese su Apellido: ");
	scanf("%s", & Apellido);
	printf("\n Ingrese su número de dni: ");
	scanf("%s", & dni);
	printf("\n Ingrese su fecha de nacimiento (dd/mm/yyyy): ");
	scanf("%d/%d/%d", &dia, &mes, &anio);

    int edad= anio_v - anio; 
	if (edad>=16){
	printf("El usuario pude votar");
	printf("\n Apellido: %s, Nombre: %s, DNI: %s", Apellido, Nombre, dni);
	}
	else {
	printf("El usuario no puede votar");
	printf("\n Apellido: %s, Nombre: %s, DNI: %s", Apellido, Nombre, dni);
	}
}
