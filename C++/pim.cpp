//pim
//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>

int main (void)
{
	//Declaração das variaveis
	int CRM, CPF,x, cont;
	char paciente[15][50], senha;
	float imc, glic, alt, peso;
	
	inicio:
	//mensagem de saudação
	printf("\tBem-Vindo ao sistema HealthData!\n(Para acessar o menu de pacientes, digite 0 no CRM)\n\n");
	//solicita crm do usuario
	printf("\tDigite seu CRM: ");
	scanf("%d", &CRM);
		
	if (CRM !=0)
	{	
		//solicita a senha
		printf("\tDigite sua senha: ");
		scanf("%f", &senha);
		
		if (senha != 0);
		{
			
			lab1:
			//menu de escolhas do usuario
			int opcao;
			
			printf("\n\t---------------------------------------------------------------------\n");
			printf("\t| Escolha a operacao desejada:                                      |\n");
			printf("\t|                                                                   |\n");
			printf("\t| 1 - Cadastrar novo paciente                                       |\n");
			printf("\t| 2 - Cadastrar informacoes adicionais                              |\n");
			printf("\t| 3 - Consultar informacoes do paciente                             |\n");
			printf("\t|                                                                   |\n");
			printf("\t| Digite 0 para finalizar sistema                                   |\n");
			printf("\t---------------------------------------------------------------------\n");
			scanf("%d", &opcao);
			switch (opcao)
			{
			case 1:
				//cadastro de pacientes
				printf("\t\t-------------------- Cadastro de novo paciente --------------------\n");
				//nome completo
 				printf("\n\tNome Completo: "); 
 				gets(paciente[0]);
				//cpf
 				printf("\n\tCPF: "); 
 				gets(paciente[1]);
 				//RG
 				printf("\n\tRG: "); 
 				gets(paciente[2]);
 				//data de nascimento
 				printf("\n\tData de nascimento: "); 
 				gets(paciente[3]);
 				//telefone para contato
 				printf("\n\tTel. de contato: "); 
 				gets(paciente[4]);
 				//email do paciente
 				printf("\n\te-mail: "); 
 				gets(paciente[5]);
 				//país do paciente
 				printf("\n\tPais de Origem: "); 
 				gets(paciente[6]);
 				//estado que se reside
 				printf("\n\tEstado: "); 
 				gets(paciente[7]);
 				//cidade que mora
 				printf("\n\tCidade: "); 
 				gets(paciente[8]);
 				//nome da mae
 				printf("\n\tNome da mae: "); 
 				gets(paciente[9]);
 				//sexp do paciente
 				printf("\n\tSexo: "); 
 				gets(paciente[10]);
 				//mensagem de cadastro completo
 				printf("\n\tPaciente cadastrado com sucesso!\n\n");
 				
 				printf("\t\t--------------------------------------------------------------------\n\n");
 				//pergunta se o sistema deve voltar ao menu de escolhas ou ao login
 				printf("\n\tDeseja:\n\tDigite\n\t1-Voltar ao menu \n\n\t\tou \n\n\t2-Voltar para tela de login\n");
 				scanf("%d", &cont);
 				
 				if (cont==1)
 				{
 					goto lab1;
				}
				else
				{
					goto inicio;
				}
 				
	
			case 2:
				//cadastra dados medicos do paciente do paciente
				printf("-------------------- Informacoes adicionais --------------------\n");
				//tipo sanguineo do paciente
				printf("\n\tTipo Sanguineo: ");
				gets(paciente[11]);
				// altura para calculo de imc
				printf("\n\tAltura: ");
				scanf("%f", &alt);
				//peso para imc
				printf("\n\tPeso: ");
				scanf("%f", &peso);
				//equação para calculo de imc
				imc=peso/(alt*alt);
				//resultados de niveis do imc
				if (imc <= 18.4)
				{
					//mostra na tela em caso de imc de abaixo do peso
	    			printf("\tIMC: %3.2f", imc);
					printf(" - Abaixo do Peso.\n");
	    		}
	    		else if (imc >= 18.5 && imc <= 24.9)
				{
					//mostra na tela em caso de imc de peso normal
					printf("\tIMC: %3.2f", imc);
					printf(" - Peso Normal.\n");
				}
				else if (imc >= 25 && imc <= 29.9)
				{
					//mostra na tela em caso de imc de sobrepeso
					printf("\tIMC: %3.2f", imc);
					printf(" - Sobrepeso.\n");
	  			}
	  			else if (imc >= 30 && imc <= 39.9)
				{
					//mostra na tela em caso de obesidade
					printf("\tIMC: %3.2f", imc);
					printf(" - Obesidade.\n");
				}
				else
				{
					//mostra na tela em caso de obesidade grave
					printf("\tIMC: %3.2f", imc);
					printf(" - Obesidade Grave.\n");
	  			}
	  			//solicita o nivel de glicose no sangue
	  			printf("\n\tNivel de Glicose no sangue (em mg/dl): ");
	  			scanf("%f", &glic);
	  			//resultados da medição de glicemia
	  			if (glic <= 70)
	  			{
	  				//mostra na tela em caso de hipoglicemia
	  				printf("\t%3.2f", glic);
	  				printf(" - Hipocglicemia.\n\n");
				}
				else if (glic >=70 && glic <=110)
				{
					//mostra na tela em caso de glicemia normal
					printf("\t%3.2f", glic);
					printf(" - Glicemia normal.\n\n");
				}
				else if (glic >=110 && glic <= 126)
				{
					//mostra na tela em caso de pre diabetes
					printf("\t%3.2f", glic);
					printf(" - Pre-Diabetes.\n\n");
				}
				else
				{
					//mostra na tela em caso de diabetes
					printf("\t%3.2f", glic);
					printf(" - Diabetes.\n\n");
				}
				//mensagem de cadastro completo
				printf("\tInformacoes adicionadas com sucesso!\n\n");
				
				printf("\t----------------------------------------------------------------\n\n");
				//pergunta se o sistema deve voltar ao menu ou ao login
				printf("\n\tDeseja:\n\tDigite\n\t1-Voltar ao menu \n\n\t\tou \n\n\t2-Voltar para tela de login\n");
 				scanf("%d", &cont);
 				
 				if (cont==1)
 				{
 					goto lab1;
				}
				else
				{
					goto inicio;
				}
	
			case 3:
				//tela de visualização
				printf("\t-------------------- Visualizacao --------------------\n");
				//nome completo
		    	printf("\n\tNome completo do paciente: ");
		    	printf("%s", paciente[0]);
				//cpf
				printf("\n\tCPF: ");
				printf("%s", paciente[1]);
				//rg
				printf("\n\tRG: ");
				printf("%s", paciente[2]);
				//data de nascimento
				printf("\n\tData de nascimento(DD/MM/AAAA): ");
				printf("%s", paciente[3]);
				//telefone
				printf("\n\tTelefone de contato: ");
				printf("%s", paciente[4]);
				//email
				printf("\n\te-mail: ");
				printf("%s", paciente[5]);
				//pais de origem
				printf("\n\tPais de origem: ");
				printf("%s", paciente[6]);
				//estado residente
				printf("\n\tEstado: ");
				printf("%s", paciente[7]);
				//cidade que reside o paciente
				printf("\n\tCidade: ");
				printf("%s", paciente[8]);
				//nome da mae do paciente
				printf("\n\tNome da mae: ");
				printf("%s", paciente[9]);
				//sexo do paciente
				printf("\n\tSexo: ");
				printf("%s", paciente[10]);
				//tipo sanguineo do paciente
				printf("\n\tTipo Sanguineo: ");
				printf("%s", paciente[11]);
				//mostra o nivel de diabetes cadastrado
				printf("\n\tGlicemia: ");
				if (glic <= 70)
	  			{
	  				//mostra na tela em caso de hipoglicemia
	  				printf("\t%3.2f", glic);
	  				printf(" - Hipocglicemia.\n\n");
				}
				else if (glic >=70 && glic <=110)
				{
					//mostra na tela em caso de glicemia normal
					printf("\t%3.2f", glic);
					printf(" - Glicemia normal.\n\n");
				}
				else if (glic >=110 && glic <= 126)
				{
					//mostra na tela em caso de pre diabetes
					printf("\t%3.2f", glic);
					printf(" - Pre-Diabetes.\n\n");
				}
				else
				{
					//mostra na tela em caso de diabetes
					printf("\t%3.2f", glic);
					printf(" - Diabetes.\n\n");
				}
				
				printf("\t------------------------------------------------------\n\n");
				//pergunta se o sistema deve voltar ao menu ou ao login
				printf("\n\tDeseja:\n\tDigite\n\t1-Voltar ao menu \n\n\t\tou \n\n\t2-Voltar para tela de login\n");
 				scanf("%d", &cont);
 				
 				if (cont==1)
 				{
 					goto lab1;
				}
				else
				{
					goto inicio;
				}
			
  			}
  		}
	}
	else
	{
			//pede o cpf do paciente para login
			printf("\tDigite o seu CPF: ");
			scanf("%d", &CPF);
			//pede a senha
			printf("\tDigite sua senha: ");
			scanf("%f", &senha);
			
			if (senha != 0);
			{	
			lab2:
				//menu de escolhas do paciente
				int opcao;
				printf("\n\t---------------------------------------------------------------------\n");
				printf("\t| Escolha a operacao desejada:                                      |\n" );
				printf("\t|                                                                   |\n" );
				printf("\t| 1 - Consultar com CPF                                             |\n" );
				printf("\t|                                                                   |\n");
				printf("\t| Digite 0 para finalizar sistema                                   |\n");
				printf("\t---------------------------------------------------------------------\n");
				scanf("%d", &opcao);
				
				switch (opcao)
				{
				case 1:
				//tela de visualização do programa
				printf("\t-------------------- Visualizacao --------------------\n");
				//nome completo
				printf("\n\tNome completo do paciente: ");
		    	printf("%s", paciente[0]);
				//cpf
				printf("\n\tCPF: ");
				printf("%s", paciente[1]);
				//rg
				printf("\n\tRG: ");
				printf("%s", paciente[2]);
				//data de nascimento
				printf("\n\tData de nascimento(DD/MM/AAAA): ");
				printf("%s", paciente[3]);
				//telefone
				printf("\n\tTelefone de contato: ");
				printf("%s", paciente[4]);
				//email
				printf("\n\te-mail: ");
				printf("%s", paciente[5]);
				//pais de origem
				printf("\n\tPais de origem: ");
				printf("%s", paciente[6]);
				//estado que reside
				printf("\n\tEstado: ");
				printf("%s", paciente[7]);
				//cidade que reside
				printf("\n\tCidade: ");
				printf("%s", paciente[8]);
				//nome da mae
				printf("\n\tNome da mae: ");
				printf("%s", paciente[9]);
				//sexo do paciente
				printf("\n\tSexo: ");
				printf("%s", paciente[10]);
				//tipo sanguineo do paciente
				printf("\n\tTipo Sanguineo: ");
				printf("%s", paciente[11]);
				//nivel de glicemia no sangue
				printf("\n\tGlicemia: ");
				if (glic <= 70)
	  			{
	  				//mostra na tela em caso de hipoglicemia
	  				printf("\t%3.2f", glic);
	  				printf(" - Hipocglicemia.\n\n");
				}
				else if (glic >=70 && glic <=110)
				{
					//mostra na tela em caso de glicemia normal
					printf("\t%3.2f", glic);
					printf(" - Glicemia normal.\n\n");
				}
				else if (glic >=110 && glic <= 126)
				{
					//mostra na tela em caso de pre diabetes
					printf("\t%3.2f", glic);
					printf(" - Pre-Diabetes.\n\n");
				}
				else
				{
					//mostra na tela em caso de diabetes
					printf("\t%3.2f", glic);
					printf(" - Diabetes.\n\n");
				}
				
				printf("\t-------------------------------------------------------\n\n");
				//pergunta se o sistema deve voltar ao menu ou ao login
				printf("\n\tDeseja:\n\tDigite\n\t1-Voltar ao menu \n\n\t\tou \n\n\t2-Voltar para tela de login\n");
 				scanf("%d", &cont);
 				
 				if (cont==1)
 				{
 					goto lab2;
				}
				else
				{
					goto inicio;
				}
					
				break;
				}
			}
	}
	return (0);
}
