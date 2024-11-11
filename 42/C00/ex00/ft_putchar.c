#include <unistd.h>

void ft_putchar(char c)
{
	/* char c; |  e' sbagliato dichiarare nuovamente char c perche' gia' dichiarato come parametro della funzione void ft_putchar(char c)*/
	
	write(1, &c, 1);
}

int main()
{
	ft_putchar('A');
	return 0;
}
