//Paula de Paz G�mez
//N�mero de Matr�cula:53917
// Ejemplo con for, mostrar los n�meros primos del 1 al 200. 
//Def. n�mero primo: aquel que es divisible �nicamente por s� mismo y por la unidad.

#include <stdio.h>
int main()
{
	int n, k;
	_Bool esPrimo; // controla si es primo o no.
	
	for (n =2; n<= 200; n++)
	{
		esPrimo = 1; //Suponer que el numero es primo.
		for(k=2; k<n; k++)
		{
			if(n%k==0) // si es divisible por otro numero, no es primo.
			esPrimo = 0;
		}
		if(esPrimo)
		printf("%d\n",n); 
	}
	return 0;
}
