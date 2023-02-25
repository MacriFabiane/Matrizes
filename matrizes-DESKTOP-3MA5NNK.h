void gerarMatrizInteiro (int lin, int col, int matriz[][col], int lim)
{
	int i=0, j=0;
	
	for (i=0; i<lin; i++)
	{
		for (j=0; j<col; j++)
		{
			matriz[i][j]= rand()% lim + 1;
		}
	}
}
void mostrarMatrizInteiro (int lin, int col, int matriz[][col])
{
	int i=0, j=0;
	
	for (i=0; i<lin; i++)
	{
		for(j=0; j<col; j++)
		{
			printf("%d\t", matriz[i][j]);
		}
		printf ("\n");
	}
}
int calculaPotenciaMatriz (int lin, int col, int matriz[][col], int vetor[lin])
{
	int i, j, k, m;
	
	
	for (i=0; i<lin; i++)
	{
	   for  (j=0; j<col; j++)
		{
			k=matriz[i][j];
			m=matriz[i][j+1];
			
			vetor[i]=pow(k, m);
		
			
			j++;
			
			
			
		}
	}

}
