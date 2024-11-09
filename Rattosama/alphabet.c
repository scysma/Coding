#include <unistd.h>

void ft_print_alphabet(void)
{
	char lettera;
	
	lettera = 97;
	while(lettera <= 'z')
	{
	write(1, &lettera, 1);
	lettera++;
	}
}

int main()
{
	ft_print_alphabet();
}

