// MEDIA APROVADO REPROVADO 
#include <stdio.h>
#include <stdlib.h>

int main()
{
	float nota1; //cria uma variavel do tipo numerico flutuante
  	float nota2; //cria uma variavel do tipo numerico flutuante
  	float media; //cria uma variavel do tipo numerico flutuante
	int i;  //cria uma variavel do tipo numerico inteiro
for (i=0; i<5; i++) //comando de repetição com as condições de contagem de repetição
  	{
  	    printf("Digite a nota 1 : "); //imprime na tela e solicita a primeira nota
	    scanf("%f", &nota1); //identifica os dados como dado e atribui a variavel flutuante
  	    printf("Digite a nota 2 : "); //imprime na tela e solicita a segunda nota
	    scanf("%f", &nota2); //identifica os dados como dado e atribui a variavel flutuante
  	    media = (nota1 + nota2) / 2 ; //calculo de media
		    if (media >= 5) //condição de nota de media caso maior que 5
  			{
  				printf( "APROVADO !!!\n\n"); //imprime caso media seja maior que 5
           	}
  	        else //condição de nota de media menor que 5
  	        {
	            printf( "REPROVADO !!!\n\n"); //imprime caso media seja menor que 5
			}
    }
  	return 0; //encerra o programa
  	
}

