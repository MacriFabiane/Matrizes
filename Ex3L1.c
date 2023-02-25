/*3) Gerar uma matriz 10x10 preenchida com o número 1 e mostrar a matriz. Em seguida, preencher com 0 as
diagonais principal e secundária e mostrar a matriz.*/
#include <stdio.h>
#include "matrizes.h"
int main (void)
{
	char ch;
	
	do
	{
		int lin=10, col=10, matriz1[lin][col], matriz2[lin][col], i, j, k=1;
		
		for(i=0; i<lin; i++)
		{
			for (j=0; j<col; j++)
			{
				matriz1[i][j]=1;
			}
		}
		printf ("\n======MATRIZ ORIGINAL======\n");
		mostrarMatrizInteiro(lin, col, matriz1);
		
		for(i=0; i<lin; i++)
		{
			for (j=0; j<col; j++)
			{
				if (i==j)
				{
					matriz2[i][j]=0;
				}
				else if (i==i && j==(lin-k))
				{
				    matriz2[i][j]=0;
					k++;	
				}
				else 
				{
					matriz2[i][j]=1;
				}
				
			}
		}
		
		printf ("\n======MATRIZ ATUAL======\n");
		mostrarMatrizInteiro(lin, col, matriz2);
		
		
	
	
		
	   printf ("\nDeseja repetir o programa? (S/s) ");
	   setbuf (stdin, NULL);
	   scanf ("%c", & ch);
		
	}while(ch=='S'||ch=='s');
	
	return 0;
}
