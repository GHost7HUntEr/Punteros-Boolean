#include <stdio.h>
#include <stdbool.h>
#include "modules/punteros.h"

int main(int arg, char *argv[]){
	int user_value = 0;
	bool bandera_win = false;
	bool bandera = true;

	while(!bandera_win){
		printf("Elige el mensaje que quieres que aparezca: \n");
		printf("1.- Hola mundo en inglés.\n");
		printf("2.- Hola mundo en español.\n");
		printf("3.- Salir del programa.\n");
		printf("Selecciona su opcion: ");
		scanf("%i",&user_value);

		//Simplemente, verificamos los casos
		switch (user_value){
			case 1: 
				cambiarBandera(&bandera, true);
			break;

			case 2: 
				cambiarBandera(&bandera, false);
			break;

			case 3: 
				cambiarBandera(&bandera_win, true);
			break;
		}

		//Lógica interna
	
		if(!bandera){
			printf("Hola mundo\n");
		}else{
			printf("Hello wordl\n");
		}
	}
	
	return 0;
}