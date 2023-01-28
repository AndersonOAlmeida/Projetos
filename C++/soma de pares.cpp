//1234 feijao no prato

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void)
{
	int intervalofim, intervaloinicio, x, soma=0;
	
	printf("Digite o inicio do intervalo: ");
	scanf("%d", &intervaloinicio);
	
	printf("Digite o fim do intervalo: ");
	scanf("%d", &intervalofim);
	
	for(x=intervaloinicio;x<=intervalofim;x=x+2)
	{
		if(x%2==0);
		{
			printf("%d \n", x);
			soma=soma+x;
		}
	}
		
	printf("%d \n", soma);
	system("Pause");
	return 0;
	
	
	
}
