/*
Autora: Mar�a Canga
Grupo: Q-103
Descripci�n: N�meros pares o impares del 1 al 50
*/

#include <stdio.h>

int main() {
	int i, num, num1, cont=0;
	
	printf ("1- Numeros impares / 2- Numeros pares\n");
	scanf ("%i", &num);
	
	if (num==1){
		printf ("Numeros impares del 1 al 50:\n");
	    for (i=1; i<=50; i+=2){
		    printf ("%i ", i);
	    }
	}
	else if (num==2){
		printf ("Nueros pares del 1 al 50:\n");
		for (i=2; i<=50; i+=2){
		    printf ("%i ", i);
	    }
	}
	else {
		printf ("Opcion incorrecta.");
	}
}
