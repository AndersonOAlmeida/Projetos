//idades

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void)
{
	int idade, cont21=0, cont50=0;
	
	while(idade!=-99)
	{
		printf("insira sua idade: ");
		scanf("%d", &idade);
		
		if(idade>=0 && idade<=21)
		{
			cont21++;
		}
		else if(idade>=50)
		{
			cont50++;
		}
	}
	printf("as pessoas com 21 ou menos sao: %d", cont21);
	printf("\nas pessoas com 50 ou mais sao: %d \n", cont50);
	system("pause");
	return (0);
}
