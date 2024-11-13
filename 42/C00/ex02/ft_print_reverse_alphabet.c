/*:Stdheader*/

#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
	char lettera;
	lettera = 'z';

	while (lettera >= 'a')
	{
		write(1, &lettera, 1);
		lettera--;
	}
}
