//aprovacao ou reprovacao

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	
	//variaveis
	
	float nota1, nota2, media;
	
	//entrada
	
	printf("digite a nota 1: ");
	scanf("%f", &nota1);
	
	printf("digite a nota 2: ");
	scanf("%f", &nota2);
	
	//processamento
	
	media=(nota1+nota2)/2;
	
	//funcionamento
	
	if(media>=5)
	{
		printf("aluno aprovado \n");
		printf("%f", media);
	}
	else
	{
		printf("aluno reproavado \n");
		printf("%f", media);
	}
	
	return 0;
}
