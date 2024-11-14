:Stdheader

void ft_ft(int *nbr)
{
	/*int a;

	a = 1;

	nbr = &a;*/

	*nbr = 42; // quanto scritto sopra e' errato perche' cosi facendo si modifica il valore di un int locale - da me assegnato - e non dell'int passando dall'esterno, e pertanto riportato dalla funzione (?)
}
