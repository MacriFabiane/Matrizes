/*) Gerar uma matriz 3x3 com números randômicos no intervalo de 1 a 100 e a seguir escrever a localização 
(linha e a coluna) do maior valor.*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include "matrizes.h"
int main (void)
{
	char ch;
	do
	{
		int lin=3, col=3, matriz[lin][col], lim=100, maior=0, i, j, k, l;
		gerarMatrizInteiro(lin, col, matriz, lim);
		printf ("\n===Matriz===\n");
		mostrarMatrizInteiro(lin, col, matriz);
		
		for(i=0; i<lin; i++)
		{
			for(j=0; j<col; j++)
			{
				if (matriz[i][j]>maior)
				{
					maior=matriz[i][j];
					k=i;
					l=j;
				}
			}
		}
		printf ("O maior elemento da matriz eh %d na colouna %d e linha %d", maior,l+1, k+1);
		
		
		
		printf ("\nDeseja repetir o prgrama(S/s)? ");
		setbuf(stdin, NULL);
		scanf("%c", &ch);
	}while (ch=='S'||ch=='s');
}
