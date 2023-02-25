/*a) Gerar uma matriz de 3x3 com números aleatórios entre 1 e 10.b) Somar todos os elementos da matriz.c) Somar os elementos
da diagonal principal da matriz.d) Somar os elementos da diagonal secundária da matriz.e) Mostrar a matriz e as somas.*/
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include "matrizes.h"
int main (void)
{
	int matriz[3][3], lim=10, i, j, soma=0, diagonal=0, diagonal2=0;
	char ch;
	
	do
	{
	gerarMatrizInteiro(3, 3, matriz, lim);
	printf ("======MATRIZ======\n");
	mostrarMatrizInteiro(3, 3, matriz);
	
	for(i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{
			soma=matriz[i][j]+soma;
		}
	}
	diagonal=matriz[0][0]+matriz[1][1]+matriz[2][2];
	diagonal2= matriz[2][0]+matriz[1][1]+matriz[0][2];
	printf ("Soma dos elementos da diagonal principal da matriz: %2d\n", diagonal);
	printf("Soma dos elementos da diagonal secundaria da matriz: %2d\n", diagonal2);
	printf ("Soma de todos os elementos: %2d\n", soma);
	
	printf("Deseja repetir o programa (S/s) ?");
	setbuf(stdin, NULL);
	scanf ("%c", & ch);
    }while(ch=='S' || ch=='s');
    
    return 0;
}
