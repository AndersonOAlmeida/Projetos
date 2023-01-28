//menu de escolhas, menu_dos_produtos
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
int main (void)
{
	int opcao; //cria a variavel como numerico inteiro
	
	//seguintes linhas apresentam uma tabela na tela de forma organizada
	printf("-----------------------------------------------------------------------\n");
	printf("| Escolha a operacao desejada:                                      |\n" );
	printf("|                                                                                   |\n" );
	printf("| 1 - IMC                                                                        |\n" );
	printf("| 2 - Aprovado/Reprovado                                              |\n" );
	printf("| 3 - Consumo do veiculo                                                |\n" );
	printf("| 4 - Metade de um numero se maior que 20                   |\n" );
	printf("| 5 - Mostrar resultado da soma se maior que 10             |\n" );
	printf("| 6 - Divisao do resultado se maior que 10                       |\n" );
	printf("| 7 - Ler numero e mostrar se maior,menor ou igual a 20 |\n" );
	printf("| 8 - Idade                                                                      |\n" );
	printf("| 9 - Calculo de imprestimo                                             |\n" );
	printf  ("----------------------------------------------------------------------\n");
	scanf("%d", &opcao); //identifica o dado inserido como numerico inteiro
	
	switch (opcao) //função que vai identificar qual das função executar a partir de agora
	{
		
			
		case 1: //em caso de dado na variavel opcao seja de valor 1, executará o seguinte código
		
			float peso; //cria a variavel como numerico flutuante
  			float altura; //cria a variavel como numerico flutuante
  			float imc; //cria a variavel como numerico flutuante

  			printf("Digite a altura :\n"); //imprime na tela e solicita a altura do individuo
			scanf("%f", &altura); //identifica o dado inserido como um dado flutuante na variavel altura
  			printf("Digite o peso :\n"); //imprime na tela e solicita o peso do individuo
			scanf("%f", &peso); //identifica o dado inserido como um dado flutuante na variavel de peso
  	
			imc = peso / (altura * altura); //equação que faz o calculo de imc
 				
			if (imc <= 18.4) //condicional que identifica se o valor de imc é menor que o valor calculado
		  	{
  				printf( "Abaixo do Peso !!! \n"); //imprime a mensagem caso o valor do imc for o da condicional if
    			printf( "Se alimente melhor, nao deixe de comer!"); //imprime a mensagem caso o valor do imc for o da condicional if 
   			}
   	    	else if (imc >= 18.5 && imc <= 24.9) //condicional que identifica se o valor de imc está dentro dos parametros do valor calculado
			{
				printf( "Peso Normal !!! \n"); //imprime a mensagem caso o valor do imc for o da condicional else if
				printf( "Continue assim, e lembre-se sempre de se alimentar corretamente!"); //imprime a mensagem caso o valor do imc for o da condicional else if
			}
       		else if (imc >= 25 && imc <= 29.9) //condicioanl que identifica se o valor de imc está dentro dos parametros do valor calculado
           	{ 
				printf( "Peso Sobre  !!! \n");  //imprime a mensagem caso o valor do imc for o da condicional else if
				printf( "Melhore a maneira de se alimentar, evite besteiras! ");  //imprime a mensagem caso o valor do imc for o da condicional else if
			}
			else if (imc >= 30 && imc <= 39.9) //condicional que identifica se o valor de imc está dentro dos parametros do valor calculado 
			{				 
				printf( "Obesidade !!! \n");  //imprime a mensagem caso o valor do imc for o da condicional else if
			    printf( "Atividades fisicas e se alimentar bem podem ser o melhor caminho para melhorar sua saude!");  //imprime a mensagem caso o valor do imc for o da condicional else if
			}
			else //última condição que identifica o calculo do imc
			{ 
   				printf( "Obesidade Grave !!! \n"); //imprime a mensagem caso o valor do imc for o da condicional else if
   				printf( "Procure um nutricionista e siga uma dieta e treinos fisicos, nao deixe sua saude de lado!");  //imprime a mensagem caso o valor do imc for o da condicional else if
			}
		
		break; //pausa o programa de imc
		
		case 2: //em caso de dado na variavel opcao seja de valor 2, executará o seguinte código
		
			float nota1, nota2, media; //criação de variaveis em forma de dado numerico flutuante
			printf ("Digite a Nota1: "); //imprime a frase solicitando a primeira nota
			scanf ("%f", &nota1); //identifica o dado inserido como dado flutuante e agrega a variavel de nota1
			printf ("Digite a Nota2: "); //imprime a frase solicitando a segunda nota
			scanf ("%f", &nota2); //identifica o dado inserido como dado flutuante e agrega a variavel de nota2
	
			media=(nota1+nota2)/2; //calculo de media
	
			if (media >=5) //condição de nota de media caso maior que 5
			{
	    		printf ("Aluno aprovado!"); //imprime caso media seja maior que 5
			}
			else //condição de nota de media menor que 5
			{
				printf("Aluno reprovado!"); //imprime caso media seja menor que 5
			}		
 		
		break; //pausa o programa de notas
 		
 		case 3: //em caso de dado na variavel opcao seja de valor 3, executará o seguinte código
 		
    		float distancia, horas, velocidademed, consumo; //criação de variaveis de forma numericos flutuantes
	
			printf("digite o valor das horas: "); //imprime na tela a mensagem e solicite as horas
            scanf("%f", & horas); //identifica o dado inserido como numero flutuante e agrega na variavel horas
			printf("Digite a velocidade media: "); //imprime na tela a mensagem e solicite a velocidade media
			scanf("%f", & velocidademed); //identifica o dado inserido como numero flutuante e agrega na variavel velocidademed
	
			distancia=horas*velocidademed; //calculo de distancia
			consumo=distancia/12; //calculo de consumo
	
	
			printf("A distancia e de: "); //mostra na tela a frase para mostrar a distancia
			printf("%.2f km.\n", distancia); //mostra na tela a distancia calculado
	
			printf("A consumo e de: "); //mostra na tela a frase para mostrar o consumo
			printf("%.2f Litros\n", consumo); //mostra na tela o consumo calculado
		
		break; //pausa o programa de calculo de consumo
		
		case 4: //em caso de dado na variavel opcao seja de valor 4, executará o seguinte código
		
			float f_numero, f_metade; //cria as variaveis de forma numerico flutuante
			printf ("Digite um numero: "); //imprime a mensagem na tela e solicita um numero
			scanf ("%f",  & f_numero ); //identifica o dado inserido como numero flutuante e agrega na variavel f_numero

			f_metade=f_numero/2; //calculo da metade do numero
	
			if (f_numero >20 ) //condição que identifica se o numero é maior que 20
		    {
		    	printf ("A metade do numero e: "); //imprime na tela a frase
		    	printf ("%.2f", f_metade); //imprime o numero calculado na f_metade
		    }
			else //condição que identifica a exceção
		    {
				printf ("O numero nao e maior que 20"); //imprime a frase caso a exceção seja verdadeira
		    }
		
		break; //pausa o programa de metade dos numeros
		
		case 5: //em caso de dado na variavel opcao seja de valor 5, executará o seguinte código
		
			int d_numero1, d_numero2, d_soma; //cria as variaveis em forma numerica inteira
	
			printf("Digite o primeiro numero: "); //imprime na tela a mensagem e solicita o primeiro numero
			scanf("%d", & d_numero1); //identifica o numero inteiro inserido e agrega na variavel d_numero1
			printf("Digite o segundo numero: "); //imprime na tela a mensagem e solicita o segundo numero
			scanf("%d", & d_numero2); //identifica o numero inteiro inserido e agrega na variavel d_numero2
	
			d_soma=d_numero1+d_numero2; //calculo da soma do primeiro numero com o segundo numero
	
			if (d_soma >10) //condicional de identificação caso a soma seja maior que 10
			    {
			        printf("O resultado da soma e: "); //imprime a frase na tela
					printf("%d", d_soma); //imprime na tela o resultado da soma
	    		}
			else //exceção da condicional de identificação caso a soma seja menor que 10
			{
				printf("Tente novamente, valor insuficente!"); //imprime a frase na tela
            }
 		
		break; //pausa o programa
 		
 		case 6: //em caso de dado na variavel opcao seja de valor 6, executará o seguinte código
 		
			int d_num1, d_num2, d_total, d_divisao; //criação de variaveis numéricas inteiras
			printf("Digite o primeiro numero : "); //imprime na tela e solicita o primeiro numero
			scanf("%d", & d_num1); //identifica o numero inteiro inserido e argega na variavel d_num1
			printf("Digite o segundo numero : "); //imprime na tela e solicita o segundo numero
			scanf("%d", & d_num2); //identifica o numero inteiro inserido e agrega na variavel d_num2
	
			d_total= d_num1+d_num2; //calculo da soma do primeiro com o segundo numero
			d_divisao= d_total/2; //calculo de divisao da soma dos numeros
	
			if (d_total >10) //condicional de identificação caso a divisão seja maior que 10
		    {
		    	printf("O resultado da soma e: "); //imprime a frase na tela
		    	printf("%d", d_divisao); //imprime o resultado da divisão na tela
		    }
			else //exceção da condicional de identificação caso a divisão seja menor que 10
			{
		    	printf("Tente novamente, valor insuficente!"); //imprime a frase na tela
			}
		
		break; //pausa o programa
		
		case 7: //em caso de dado na variavel opcao seja de valor 7, executará o seguinte código
		
        	float f_numero1; //cria as variaveis do tipo numérico flutuantes
  
 	    	printf("Digite um numero: "); //imprime na tela e solicita o um numero
    		scanf("%f" , & f_numero1); //identifica o dado inserido como um numero flutuante e agrega na variavel f_numero1
	
    		if (f_numero1 <20) //condicional que identifica se o numero é menor que 20
			{
            	printf("O numero e menor que vinte"); //imprime a frase que o numero é menor que 20 na tela
			}
        	else if (f_numero1 >20) //condicional que identifica se o numero é maior que 20
			{
				printf("O numero e maior que vinte"); //imprime a frase que o numero é maior que 20 na tela
			}
        	else //condicional de exceção caso o numero seja 20
			{
				printf("O numero e vinte"); //imprime a frase que o numero é 20
			}	
		
		break; //pausa o programa
		
		case 8: //em caso de dado na variavel opcao seja de valor 8, executará o seguinte código
			
			int d_anoatual, d_anodonascimento, d_idade; //cria as variaveis do tipo numericos inteiros
	
			printf ("Digite o ano do seu nascimento: "); //imprime a frase na tela e solicita o ano de nascimento
			scanf ("%d", & d_anodonascimento); //identifica o numero como inteiro e agrega a variavel d_nascimento
	
			printf ("Digite o ano atual: "); //imprime a frase na tela e solicita o ano atual
			scanf ("%d", & d_anoatual); //identifica o dado como inteiro e agrega a variavel d_anoatual
	
			d_idade= d_anoatual-d_anodonascimento; //calculo de idade

			printf("Sua idade e:"); //impime a frase
			printf ("%d\n", d_idade); //mostra na tela o resultado do caculo de idade

		break; //pausa o programa
		
		case 9: //em caso de dado na variavel opcao seja de valor 8, executará o seguinte código
			
        	float f_salario, f_prestacao, porcentage; //cria as variaveis do tipo numérico flutuante
        	
        	printf("Digite o valor do salario: "); //imprime na tela e solicita o valor do salario
        	scanf("%f", &f_salario); //identifica o dado inserido como numero flutuante e agrega a variavel f_salario
        	printf("Digite o valor da prestacao: "); //imprime na tela e solicita o valor da prestação
        	scanf("%f", &f_prestacao); //identifica o dado inserido como numero flutuante o agrega a variavel f_prestacao
        	
        	porcentage = f_salario * 0.20; //calculo para saber a porcentagem da prestaçãp 
	
        	if(f_prestacao > porcentage ) //condicional que identifica se o valor da prestação é maior que o da porcentagem
			{
				printf("Emprestimo nao pode ser concedido! "); //imprime a frase na tela
			}
			else //condicional de exceção caso a prestação não seja maior que a porcentagem
			{
				printf("Emprestimo pode ser concedido! "); //imprime a frase na tela
			}
    	break; //pausa o programa
    }
    system ("pause"); //pausa o programa inteiro
    return 0;//encerra o programa inteiro
}
