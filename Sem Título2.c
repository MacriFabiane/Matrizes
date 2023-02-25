#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void gerarMatrizInteiroDe1aLimite(int linha, int colunas, int matriz[][colunas], int limites);
void mostrarMatrizInteiro (int linha, int colunas, int matriz[][colunas]);
int main (void)
{
	

	int i, j, matriz [2][3], lim=10; //linha e colunas
	//matriz[0][0]=1;
	//matriz[0][1]=2;
	//matriz[0][2]=3; pode declarar assim os dados
	/*for (i=0; i<2; i++)
	{
		for (j=0; j<3; j++)
		{
			printf ("Informe o valor para o elemento da linha %d da matriz e coluna %d da matriz: ", i, j);
			scanf ("%d", & matriz[i][j]);//ou desse jeito aqui
		}
	}
	
	printf("====MATRIZ====\n");
	for (i=0; i<2; i++)//controla as linhas
	{
		for (j=0; j<3; j++)//controla las colunas
		{
		   printf("%d\t", matriz[i][j]);	
		}
		printf ("\n");
	}*/
	
	gerarMatrizInteiroDe1aLimite(2, 3, matriz, lim);
	printf("====MATRIZ====\n");
	mostrarMatrizInteiro (2, 3, matriz);
	
	
	return 0;
}
void gerarMatrizInteiroDe1aLimite(int linha, int colunas, int matriz[][colunas], int limite)
{
	int i, j;
	srand(time(NULL));
	for (i=0; i<linha; i++)
	{
		for (j=0; j<colunas; j++)
		{
		  matriz[i][j]= rand()%limite +1;
		}
	}
}
void mostrarMatrizInteiro (int linha, int colunas, int matriz[][colunas])
{
	int i, j;
	
	for (i=0; i<linha; i++)
	{
		for (j=0; j<colunas; j++)
		{
			printf("%d\t", matriz[i][j]);
		}
		printf("\n");
	}
}
