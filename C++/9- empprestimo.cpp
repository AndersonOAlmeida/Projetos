//emprestimo

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	
	//variaveis
	
	float salario, prestacao;
	
	//entrada
	
	printf("digite o seu salario: ");
	scanf("%f", &salario);
	
	printf("valor da prestacao: ");
	scanf("%f", &prestacao);
	
	//funcionamento
	
	if (prestacao>salario/5)
	{
		printf("emprestimo nao pode ser concedido!");
	}
	else
	{
		printf("emprestimo pode ser concedido!");
	}
	
	return 0;
}
