#include <unistd.h>

void ft_putchar(char lettera)
{
	lettera = 'a';

	char *pointer;

	pointer = &lettera;

	*pointer = 'b';

	write(1, &lettera, 1);
}

int main()
{
	ft_putchar('a');
}
