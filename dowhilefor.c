/*Autor: Rafael Garc�a G�mez
Grupo:Q103
Descripci�n: sucesi�n de n�meros con bucle do while*/

#include<stdio.h>
int main(){
	int x,y,i;
	printf("escriba un numero: ");
	scanf("%i",&x);
	
	do{
		printf("escriba un numero mayor que el otro: ");
		scanf("%i",&y);
	}
	while (y<x);
	
	for(i=x;i<=y;i++){
		printf("%i ",i);
	}
}
