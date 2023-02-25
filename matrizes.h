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
		for(j=0; j<lin; j++)
		{
			printf("%d\t", matriz[i][j]);
		}
		printf ("\n");
	}
}
