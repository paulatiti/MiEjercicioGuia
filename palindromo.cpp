#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h> 


//Funcion para convertir un string a mayusculas
	void convertir_a_mayusculas(char *cadena) {
	for (int i = 0; cadena[i]; i++) {
		cadena[i] = toupper(cadena[i]);
	}
}

//Funcion para verificar si un nombre es palindromo (ignora mayusculas y minusculas)
	int es_palindromo(char *nombre) {
	int inicio = 0;
	int fin = strlen(nombre) - 1;
	
	while (inicio < fin) {
		if (tolower(nombre[inicio]) != tolower(nombre[fin])) {
			return 0; // No es palindromo
		}
		inicio++;
		fin--;
	}
	return 1;  //Es palindromo
}

int main (int argc, char *argv[])
{
	char nombre[100];
	int opcion;

	//Se solicita un nombre al usuario
		printf("Introduce un nombre:");
	scanf("%s", nombre);
	
	//Menu para seleccionar el servicio
		printf("Selecciona un servicio:\n");
	printf("1. Verificar si el nombre es palindromo\n");
	printf("2. Devolver el nombre en mayusculas\n");
	scanf("%d", &opcion);
	
	
	switch(opcion) {
	case 1:
			if (es_palindromo(nombre)) {
				printf("El nombre '%s' es un palindromo\n", nombre);
		} else {
				printf("El nombre '%s' no es un palindromo\n", nombre);
			}
			break;
	case 2:
				convertir_a_mayusculas(nombre);
			printf("El nombre en mayusculas es: %s\n", nombre);
			break;
			
	default:
				printf("Opcion no valida\n");
			break;
	}
	
	return 0;

}

