#include<stdio.h> 
#include<stdlib.h> 
#include <string.h> 
#include<math.h> 
main() 
{ 
 float PR1[3], PR2[3], media[3]; //criação de variáveis em dados flutuantes
 char nome[3][30],nome1[3][30], situacao[3][50];  //criação de variáveis em dados do tipo string
 int x, y=1; //criação de variáveis em dados do tipo de número inteiros
 	for(x=0;x<3;x++) //laço de repetição for e suas condições de repetição
 	{ 
 		printf("Informe nome %d: ",x+1); //imprime na tela pedindo o nome do aluno
 		gets(nome[x]); //identifica o que foi escrito em forma de string
 		printf("Informe nota %d do aluno %s: ",y,nome[x]); //imprime na tela perguntando a primeira nota do aluno
 		scanf("%f",&PR1[x]); //identifica o que foi escrito e registra, neste caso, como dado flutuante no vetor
 		gets(nome1[x]); //identifica e agrega o valor escrito no vetor
 		y++; //soma 1 na contagem da variavel y
 		printf("Informe nota %d do aluno %s: ",y,nome[x]); //desta vez, imprime na tela e pergunta sobre a segunda nota do aluno
 		scanf("%f",&PR2[x]); //identifica o que foi escrito e registra como dado flutuante em outro espaço do vetor
 		gets(nome1[x]); //identifica e agrega o valor escrito no vetor
 		y=1; //coloca a variavel com valor inicial 1
 	} 
 	for(x=0;x<3;x++) //laço de repetição for e suas condições de repetição
    { 
    	media[x]=(PR1[x]+PR2[x])/2; //condições para calculo de media do aluno
    	if(media[x]>5) //condição para mostrar algo na tela caso a nota da media seja superior a 5
			strcpy(situacao[x],"Aprovado Parabens"); //retornara na tela o vetor com uma mensagem de aprovado
		else //a condição que mostra a exceção, no caso da nota ser inferior a 5
			strcpy(situacao[x],"Reprovado - Vai estudar chimpanze"); //retornara na tela o vetor com uma mensagem de reprovado
    } 
 	
    printf("___________________________________________________________"); //imprimira na tela uma linha para separação
    printf("\n\nNome\tNota1\t\tNota2\tMedia\tSituacao"); //imprimirá na tela os nomes das variaveis que sera apresentado
    printf("\n_________________________________________________________"); //imprirá na tela uma linha para separação
 	
    for(x=0;x<3;x++) //condição de repetição com as condições de repetição
    { 
		printf("\n%s\t%3.2f\t\t%3.2f\t%3.2f\t%s",nome[x],PR1[x],PR2[x],media[x],situacao[x]); //imprimirá na tela as informações de nome, nota, media e situação
    } 
	printf("\n________________________________________________________"); //imprimira na tela uma linha pra separação
  	printf("\n\n"); //pula duas linhas
 	system("pause"); //pausa o sistema
	return(0); //encerra o sistema
 }

