//IMC

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	//variaveis
	float peso, altura, IMC;
	
	//entrada
	
	printf("digite o altura: ");
	scanf("%f", &altura);
	
	printf("digite a peso: ");
	scanf("%f", &peso);
	
	//processamento
	
	IMC=peso/(altura*altura);
	
	//funcionamento
	
	if(IMC <=18.4)
	{
		printf("abaixo do peso! \n");
	}
	else if(IMC >=18.5 && IMC <=24.9)
	{
		printf("peso normal! \n");
	}
	else if(IMC >=25.0 && IMC <=29.9)
	{
		printf("acima do peso! \n");
	}
	else if(IMC >=30.0 && IMC <=34.9)
	{
		printf("obesidade! \n");
	}
	else if(IMC >=35.0)
	{
		printf("obesidade morbida!");
	}
	
	return 0;
}
