// VETOR DE TRAS PARA FRENTE DOS NUMEROS PARES  
#include<stdio.h> 
#include<stdlib.h> 
#include<math.h> 
#include<conio.h> 
#include<string.h> 
main() 
{ 
 int z, vet[11], t=10; //cria as variaveis no tipo de dado numerico inteiro
 
 for(z=0; z<11; z++) //comando de repetição com as condições para a repetição
 { 
    vet[z]= t; //seleciona o vetor 
    t++; //adiciona um a variavel t
    printf("\n O numero crescente do vetor e: %d",vet[z]); //imprime na tela e inicia uma contagem de 10 a 20
 } 
    printf("\n\n"); //pula duas linhas
 
    for(z=10; z>=0; z=z-2) //comando de repetição com as condições para a repetição (nesse caso, para contagem decrescente dos numeros pares)
    {
    printf("%d\t",vet[z]); //imprime os numeros do vetor como pares decrescentes
    printf("\n"); //pula uma linha
    }

    printf("\n\n"); //pula duas linhas
    system("pause"); //pausa o sistema
    return(0); //encerra o sistema
} 

