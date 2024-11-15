#include <unistd.h>

void ft_putstr(char *str)
{
	int	len;

	len = 0;		
	while (str[len])	// "fintanto che la stringa esiste nel punto len"
		len++;
	write(1, str, len);
}

int main()
{
ft_putstr("cane");
}
