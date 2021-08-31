#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	int i = 0;
	int j = 0;
	int n=0;
	int decisao = 0;
	
	
	printf("Determine o tamanho da matriz: ");
	scanf("%d", &n);
	
	int m[n][n];
	int mt[n][n];
	
	
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("Digite um dado [%d,%d]: ", i+1,j+1);
			scanf("%d", &m[i][j]);
		}
	}
	
	printf("\n");
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{	
			printf("[%d,%d]: %d\n", i+1,j+1,m[i][j]);
		}
	}
	
	printf("\n");
	
	printf("Deseja realizar a funcao transposta da matriz digitada? \n\n 1- Sim:\n\n 2-Nao: ");
	scanf("%i",&decisao);
	
	printf("\n");
	
	if(decisao == 1)
	{
		for(j=0; j<n; j++)
		{
			for(i=0; i<n; i++)
			{
				printf("[%i,%i]: %d\n", i+1,j+1, m[i][j]);
			}
		}
	}
	

	
	
	system("pause");
	
	return 0;
}
