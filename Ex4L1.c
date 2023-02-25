/*Gerar uma matriz 10x2 com valores de 1 a 6. A primeira coluna da matriz se refere a base e a segunda 
coluna ao expoente. Criar uma função que calcule a potência, gerar um vetor que armazena o resultado da 
potência obtida a partir dos valores da matriz.*/
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include <math.h>
#include "matrizes.h"
int main (void)
{
	char ch;
	do
	{
		int lin=10, col=2, matriz[lin][col], lim=6, cont, i, j, vetorK[lin];
		
		gerarMatrizInteiro(lin, col, matriz, lim);
		printf ("\n===Matriz===\n");
		mostrarMatrizInteiro(lin, col, matriz);
		
		printf ("\n===Calculo da Potencia===\n");
	
	    calculaPotenciaMatriz(lin, col, matriz, vetorK);
	    
		printf ("BASE\t\t\tEXPOENTE\t\t\t\t\tRESULTADO\n");
			j=0;
			for (i=0; i<lin; i++)
			{
				printf ("%d\t\t\t%d\t\t\t%d\n",matriz[i][j], matriz[i][j+1], vetorK[i]);
			}
		
		
		
		
		printf ("\nDeseja repetir o programa ? (S/s) ");
		setbuf (stdin,NULL);
		scanf ("%c", & ch);
	}while (ch=='S'||ch=='s');
	

}
