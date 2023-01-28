//menu de escolhas, menu_dos_produtos?

#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int main (void)
{
	int opcao;

	printf("---------------------------------------------------------------------\n");
	printf("| Escolha a operacao desejada:                                      |\n" );
	printf("|                                                                   |\n" );
	printf("| 1 - IMC                                                           |\n" );
	printf("| 2 - Aprovado/Reprovado                                            |\n" );
	printf("| 3 - Consumo do veiculo                                            |\n" );
	printf("| 4 - Metade de um numero se maior que 20                           |\n" );
	printf("| 5 - Mostrar resultado da soma se maior que 10                     |\n" );	
	printf("| 6 - Divisao do resultado se maior que 10                          |\n" );
	printf("| 7 - Ler numero e mostrar se maior,menor ou igual a 20             |\n" );
	printf("| 8 - Idade                                                         |\n" );
	printf("| 9 - Calculo de imprestimo                                         |\n" );
	printf  ("---------------------------------------------------------------------\n");
	scanf("%d", &opcao);

switch (opcao)
{
case 1:
	float peso;
	float altura;
	float imc;
	
	printf("Digite a altura :\n");
	scanf("%f", &altura);
	
	printf("Digite o peso :\n");
	scanf("%f", &peso);
	
	imc = peso / (altura * altura);
	
	if (imc <= 18.4)
	{
    	printf( "Abaixo do Peso !!! \n");
    	printf( "Se alimente melhor, nao deixe de comer!");
    }

    else if (imc >= 18.5 && imc <= 24.9)
	{
		printf( "Peso Normal !!! \n");
		printf( "Continue assim, e lembre-se sempre de se alimentar corretamente!");
	}
	else if (imc >= 25 && imc <= 29.9)
	{
		printf( "Peso Sobre  !!! \n");
		printf( "Melhore a maneira de se alimentar, evite besteiras! ");
	}
	else if (imc >= 30 && imc <= 39.9)
	{
    	printf( "Obesidade !!! \n");
		printf( "Atividades fisicas e se alimentar bem podem ser o melhor caminho para melhorar sua saude!");
	}
	else
	{
    	printf( "Obesidade Grave !!! \n");
		printf( "Procure um nutricionista e siga uma dieta e treinos fisicos, nao deixe sua saude de lado!");
	}
	
	break;

case 2:

	float nota1, nota2, media;
	
	printf ("Digite a Nota1: ");
	scanf ("%f", &nota1);
	
	printf ("Digite a Nota2: ");
	scanf ("%f", &nota2);

	media=(nota1+nota2)/2;

	if (media >=5)
	{
    	printf ("Aluno aprovado!");
	}
	else
	{
    	printf("Aluno reprovado!");
	}
	
	break;

case 3:

    float distancia, horas, velocidademed, consumo;

	printf("digite o valor das horas: ");
	scanf("%f", & horas);

	printf("Digite a velocidade media: ");
	scanf("%f", & velocidademed);

	distancia=horas*velocidademed;

	consumo=distancia/12;

	printf("A distancia e de: ");
	printf("%.2f km.\n", distancia);
	printf("A consumo e de: ");
	printf("%.2f Litros\n", consumo);
	
	break;
	
case 4:

	float f_numero, f_metade;

	printf ("Digite um numero: ");
	scanf ("%f",  & f_numero );

	f_metade=f_numero/2;

	if (f_numero >20 )
    {
    	printf ("A metade do numero e: ");
		printf ("%.2f", f_metade);
    }
	else
    {
    	printf ("O numero nao e maior que 20 ");
	}
    
    break;
    
case 5:
    	
	int d_numero1, d_numero2, d_soma;

	printf("Digite o primeiro numero: ");
	scanf("%d", & d_numero1);

	printf("Digite o segundo numero: ");
	scanf("%d", & d_numero2);

	d_soma=d_numero1+d_numero2;

	if (d_soma >10)
    {
        printf("O resultado da soma e: ");
		printf("%d", d_soma);
    }
	else
    {
		printf("Tente novamente, valor insuficente!");
	}
	break;
	
case 6:

	int d_num1, d_num2, d_total, d_divisao;

	printf("Digite o primeiro numero : ");
	scanf("%d", & d_num1);

	printf("Digite o segundo numero : ");
	scanf("%d", & d_num2);

	d_total= d_num1+d_num2;
	d_divisao= d_total/2;

	if (d_total >10)
	{
		printf("O resultado da soma e: ");
    	printf("%d", d_divisao);
	}
	else
	{
    	printf("Tente novamente, valor insuficente!");
	}
	break;
  
case 8:

	int d_anoatual, d_anodonascimento, d_idade;

	printf("Digite o ano do seu nascimento: ");
	scanf ("%d", & d_anodonascimento);

	printf("Digite o ano atual: ");
	scanf("%d", & d_anoatual);

	d_idade= d_anoatual-d_anodonascimento;

	printf("Sua idade e:");
	printf ("%d\n", d_idade);

	break;
	
case 9:
	
	float f_salario, f_prestacao, porcentage;
    printf("Digite o valor do salario: ");
	scanf("%f", &f_salario);
	
    printf("Digite o valor da prestacao: ");
	scanf("%f", &f_prestacao);
	
    porcentage = f_salario * 0.20;

    if(f_prestacao > porcentage)
	{
		printf("Emprestimo nao pode ser concedido! ");
	}
	else
	{
		printf("Emprestimo pode ser concedido! ");
	}
    break;
    }
    system ("pause");
	return 0;
}
