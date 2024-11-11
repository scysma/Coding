#include <unistd.h>

void ft_is_negative(int n)
{

	char positive;
	positive = 'P';

	char negative;
	negative = 'N';

	if (n > 0)
	{
		write (1, &positive, 1);
	}
	if (n < 0)
	{
		write (1, &negative, 1);
	}
}

int main()
{
	ft_is_negative(1);
	return 0;
}

