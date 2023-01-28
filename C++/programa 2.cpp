// Vetor Quantidade Letras A e E
#include<stdio.h> 
#include<stdlib.h> 
#include<string.h> 
#include<math.h> 
int main(void) 
{ 
 int x, m; //cria variaveis do tipo numerico inteiro
 char nome[3][30],conta=0, conte=0, tam=0; //cria variaveis do tipo string, que armazena palavras/frases
 
 	for(x=0;x<3;x++) //comando de repetição com as condições para a repetição
 	{ 
 	printf("\tDigite um nome: "); //imprime na tela e solicita o nome
 	gets(nome[x]); //salva o dado inserico como palavra/frase no vetor
 	} 
 		for(x=0;x<3;x++) //comando de repetição com as condições para a repetição
 	{ 
 	tam=strlen(nome[x]); //
 		for(m=0;m<=tam-1;m++) //comando de repetição com as condições para a repetição
 		{ 
 			if(nome[x][m]=='A'||nome[x][m]=='a') //condição para reconhecer as letras "A" e "a" nos nomes
 			conta++; //adiciona um na contagem das letras a
 			if(nome[x][m]=='E' || nome[x][m]=='e') //condição para reconhecer as letras "E" e "e" nos nomes
 			conte++; //adiciona um na contagem das letras e
 		} 
 	} 
 
 	printf("Nos nomes digitados tem %d letras A",conta); //imprime na tela a contagem de letras "A" e "a"
 	printf("\nNos nomes digitados tem %d letras E",conte); //imprime na tela a contagem de letras "E" e "e"
 
 	printf("\n\n"); //pula duas linhas
 	system("pause"); //pausa o sistema
 	return(0); //encerra o sistema
}

