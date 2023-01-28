//mostrar a metade do numero

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	
	//variaveis
	
	float num1, num2, resultado;
	
	//entrada
	
	printf("insira um numero: ");
	scanf("%f", &num1);
	
	printf("insira outro numero: ");
	scanf("%f", &num2);
	
	//conta
	
	resultado=num1+num2; 
	
	//funcionamento
	
	if (resultado<=10)
	
	{
		printf("%f", resultado);
	}
	else
	{
		printf("%f", resultado/2);
	}
	
	return 0;
}
