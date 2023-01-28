//consumo de veiculo

#include <stdio.h>

int main (void)
{
	//variaveis
	
	float distancia, horas, velocidade, consumo;
	
	//entrada
	
	printf("digite o tempo em horas: ");
	scanf("%f", &horas);
	
	printf("digite a velocidade media: ");
	scanf("%f", &velocidade);
	
	//processamento
	
	distancia=horas*velocidade;
	
	consumo=distancia/12;
	
	//funcionamento
	
	printf("%f", consumo);
	
	return 0;
}
