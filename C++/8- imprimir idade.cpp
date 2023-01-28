//imprimir idade

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	
	//variaveis
	
	float atual, nascimento, idade;
	
	//entrada
	
	printf("digite o ano de nascimento: ");
	scanf("%f", &nascimento);
	
	printf("digite o ano atual: ");
	scanf("%f", &atual);
	
	//processamento
	
	idade=atual-nascimento;
	
	//funcionamento
	
	printf("%f", idade);
	
	return 0;
}
