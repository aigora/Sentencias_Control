/*
Rita Villalba Roncal
Grupo: Q-103

Listado de n n�meros pares
*/


#include <stdio.h>


int main(){
	
	int n,i,c;
	
	printf("Introduzca n�mero de n�meros pares que quiere que aparezcan:");
	scanf("%d", &n);
	
	i=1;
	for (i=0; i<=n; i++)
	{
		c=i*2;
		printf("%d\n", c);
	}	
}
