/*:Stdheader*/

#include <unistd.h>

void ft_print_alphabet(void)
{
	char lettera;
	lettera = 'a';

	while (lettera <= 'z')
	{
		write(1, &lettera, 1);
		lettera++;
	}
}
