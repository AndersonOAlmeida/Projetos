#include<stdio.h> 
#include<stdlib.h> 
#include <string.h> 
#include<math.h> 
main() 
{ 
 float PR1[3], PR2[3], media[3]; //cria��o de vari�veis em dados flutuantes
 char nome[3][30],nome1[3][30], situacao[3][50];  //cria��o de vari�veis em dados do tipo string
 int x, y=1; //cria��o de vari�veis em dados do tipo de n�mero inteiros
 	for(x=0;x<3;x++) //la�o de repeti��o for e suas condi��es de repeti��o
 	{ 
 		printf("Informe nome %d: ",x+1); //imprime na tela pedindo o nome do aluno
 		gets(nome[x]); //identifica o que foi escrito em forma de string
 		printf("Informe nota %d do aluno %s: ",y,nome[x]); //imprime na tela perguntando a primeira nota do aluno
 		scanf("%f",&PR1[x]); //identifica o que foi escrito e registra, neste caso, como dado flutuante no vetor
 		gets(nome1[x]); //identifica e agrega o valor escrito no vetor
 		y++; //soma 1 na contagem da variavel y
 		printf("Informe nota %d do aluno %s: ",y,nome[x]); //desta vez, imprime na tela e pergunta sobre a segunda nota do aluno
 		scanf("%f",&PR2[x]); //identifica o que foi escrito e registra como dado flutuante em outro espa�o do vetor
 		gets(nome1[x]); //identifica e agrega o valor escrito no vetor
 		y=1; //coloca a variavel com valor inicial 1
 	} 
 	for(x=0;x<3;x++) //la�o de repeti��o for e suas condi��es de repeti��o
    { 
    	media[x]=(PR1[x]+PR2[x])/2; //condi��es para calculo de media do aluno
    	if(media[x]>5) //condi��o para mostrar algo na tela caso a nota da media seja superior a 5
			strcpy(situacao[x],"Aprovado Parabens"); //retornara na tela o vetor com uma mensagem de aprovado
		else //a condi��o que mostra a exce��o, no caso da nota ser inferior a 5
			strcpy(situacao[x],"Reprovado - Vai estudar chimpanze"); //retornara na tela o vetor com uma mensagem de reprovado
    } 
 	
    printf("___________________________________________________________"); //imprimira na tela uma linha para separa��o
    printf("\n\nNome\tNota1\t\tNota2\tMedia\tSituacao"); //imprimir� na tela os nomes das variaveis que sera apresentado
    printf("\n_________________________________________________________"); //imprir� na tela uma linha para separa��o
 	
    for(x=0;x<3;x++) //condi��o de repeti��o com as condi��es de repeti��o
    { 
		printf("\n%s\t%3.2f\t\t%3.2f\t%3.2f\t%s",nome[x],PR1[x],PR2[x],media[x],situacao[x]); //imprimir� na tela as informa��es de nome, nota, media e situa��o
    } 
	printf("\n________________________________________________________"); //imprimira na tela uma linha pra separa��o
  	printf("\n\n"); //pula duas linhas
 	system("pause"); //pausa o sistema
	return(0); //encerra o sistema
 }

