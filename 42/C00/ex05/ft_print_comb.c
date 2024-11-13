/*:Stdheader*/

#include <unistd.h>

void ft_print_comb(void)
{
	char numero1;
	char numero2;
	char numero3;

	numero1 = '0';

	while (numero1 <= '7')
	{
		numero2 = numero1 + 1;
		while (numero2 <= '8')
		{
			numero3 = numero2 + 1;
			while (numero3 <= '9')
			{
				write(1, &numero1, 1);
				write(1, &numero2, 1);
				write(1, &numero3, 1);

				if (numero1 != '7' || numero2 != '8' || numero3 != '9')
				{
					write(1, ", ", 2);
				}
				numero3++;
			}
			numero2++;
		}
		numero1++;
	}
}
