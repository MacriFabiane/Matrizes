#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main (void)
{
	int i, k,  j, matriz[50][6], lim=60;
	srand(time(NULL));
	
	for (i=0; i<50; i++)
	{
		for (j=0; j<6; j++)
		{
			matriz[i][j]= rand()%lim+1;
			for(k=0; k<j; k++)
			{
				if(matriz[i][j]== matriz[i][k])
				{
					j--;
					break;
				}
			}
			
		}
	}
	for (i=0; i<50; i++)//controla as linhas
	{
		printf ("Jogo %d:  ", (i+1));
		
		for (j=0; j<6; j++)//controla las colunas
		{
		   printf("%2d\t", matriz[i][j]);	
		}
		printf ("\n");
	}
	
	return 0;
}
