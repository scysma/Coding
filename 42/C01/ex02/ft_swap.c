void ft_swap(int *a, int *b)
{
	int c;

	c = *a;		// copio il valore del puntatore *a in c
	*a = *b;	// copio il valore del puntatore *b in *a
	*b = c;
}
