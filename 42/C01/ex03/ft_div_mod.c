void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;	// l'indirizzo cui punta *div contiene l'info a / b
	*mod = a % b;	// ... *mod contiene l'info a % b
}
