#include <stdlib.h>
#include <iostream>
#include <string.h>

int main ()
{
	char paciente[2];
	
	printf("nome: ");
	scanf("%s", &paciente[0]);
	
	printf("Idade: ");
	scanf("%s", &paciente[1]);
	
	printf("nome: ");
	printf("%s", &paciente[0]);
	
	printf("\nIdade: ");
	printf("%s", &paciente[1]);
	
	return (0);
}
