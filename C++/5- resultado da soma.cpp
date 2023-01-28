//resultado da soma

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	
	//variaveis
	
	float numero1, numero2, soma;
	
	//entrada
	
	printf("digite um numero: ");
	scanf("%f", &numero1);
	
	printf("digite outro numero: ");
	scanf("%f", &numero2);
	
	//processamento
	
	soma=numero1+numero2;
	
	//funcionamento
	if (soma>=10)
	{
		printf("%f", soma);
	}
	else
	{
		printf("sem boa irmao!");
	}
	
	return 0;
}
