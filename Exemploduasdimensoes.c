#include<stdio.h>
int main (void)
{
	int salas=2, alunos=2, notas=3, i, j, k;
	float matriz [salas][alunos][notas];

	//for (i=0; i<salas; i++)
	//{
		for (j=0; j<alunos; j++)
		{
			for(k=0; k<notas; k++)
			{
				printf ("Informe a nota %d do aluno %d da sala %d: ", k+1, j+1, i+1);
				scanf("%f", & matriz[i][j][k]);
	      	}
	
	   }
//	}
	
	printf("===MATRIZ===\n");
	for (i=0; i<salas; i++)
	{
		printf ("Sala %d: ", i+1);
		for(j=0; j<alunos;j++)
		{
			printf ("Aluno %d: ", j+1);
			
			for(k=0; k<notas; k++)
			{
			  printf("%.2f\t", matriz[i][j][k]);
	       	}
		}
		printf ("\n");
	}
}
