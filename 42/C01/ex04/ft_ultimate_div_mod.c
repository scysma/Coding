void ft_ultimate_div_mod(int *a, int *b)
{
	int temp1;
	int temp2;

	temp1 = *a;		// temp1 ospita una copia del valore cui il puntatore *a punta
	temp2 = *b;
	*a = temp1 / temp2;	// sovrascrivo il contenuto di *a con la frazione
	*b = temp1 % temp2;
}
