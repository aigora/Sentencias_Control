#include <stdio.h>
int main ()
{
int n;
printf("Escribe un n�mero entero\n");
scanf(" %d", &n);
if (n % 2 == 0) 
{
printf("El n�mero %d es par.\n", n);
}
printf("Gracias por participar.\n");
return 0;
}
