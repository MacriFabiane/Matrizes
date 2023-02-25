/* Gerar uma matriz 5x5 com números randômicos, no intervalo de 1 a 5. Em seguida criar dois vetores que 
contenham, respectivamente, as somas das linhas e das colunas da matriz. Mostrar os vetores criados.*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include "matrizes.h"
void mostrarVetor (int vetor[], int tam);

int main (void)
{
	char ch;
	do
	{
		int lin=5, col=5, matriz [lin][col], lim=5, i, j, soma=0, vetorLin[lin], vetorCol[col];
		
		gerarMatrizInteiro(lin, col, matriz, lim);
		printf ("\n========MATRIZ========\n");
		mostrarMatrizInteiro(lin, col, matriz);
		
		for (i=0; i<lin; i++)
		{
			soma=0;
			for (j=0; j<col; j++)
			{
				soma=matriz[i][j]+soma;
			}
			vetorLin[i]=soma;
		}
	
	    printf ("\n=====SOMA DAS LINHAS=====\n");
	    mostrarVetor (vetorLin, lin);
	    
	    soma=0;
	
		for (j=0; j<col; j++)
		{
			soma=0;
			for (i=0; i<lin; i++)
			{
				soma=matriz[i][j]+soma;
			}
			vetorCol[j]=soma;
		}
		
		printf ("\n=====SOMA DAS COLUNAS=====\n");
	    mostrarVetor (vetorCol, col);
		
		
		printf ("\nDeseja repetir o programa? (S/s) ");
		setbuf (stdin, NULL);
		scanf ("%c", & ch);
		
	}while(ch=='S'||ch=='s');
	return 0;
}
void mostrarVetor (int vetor[], int tam)
{
	int i=0;
	
	for (i=0; i<tam; i++)
	{
		printf ("%d\t", vetor[i]);
	}
}
