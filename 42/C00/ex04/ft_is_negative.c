/*:Stdheader*/

#include <unistd.h>

void ft_is_negative(int n)
{
	char positivo;
	char negativo;

	positivo = 'P';
	negativo = 'N';

	if (n > 0)
	{
		write(1, &positivo, 1);
	}
	else
	{
		write(1, &negativo, 1);
	}
}
