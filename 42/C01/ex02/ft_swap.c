:Stdheader

void ft_swap(int *a, int *b)
{
	int holder = *a; //ho 'scaricato' il il contenuto del pointer (di cui ignoro il valore int) all'interno dell'int temporaneo holder da me creato 
	*a = *b;
	*b = holder;
}

