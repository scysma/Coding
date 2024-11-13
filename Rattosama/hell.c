#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_convert(int num)
{
	int cifra1;
	int cifra2;

	if (num > 9)
	{
		cifra1 = num / 10;
		cifra2 = num % 10;
		ft_putchar(cifra1 + 48);
		ft_putchar(cifra2 + 48);
	}
	else
	{
		ft_putchar(48);
		ft_putchar(num + 48);
	}
}

void ft_print_comb2(void)
{
	int left;
	int right;

	left = 0;

	while (left <= 98)
	{
		right = left + 1;
		while (right <= 99)
		{
			ft_convert(left);
			ft_putchar(' ');
			ft_convert(right);
			if (left != 98 || right != 99)
			{
				write(1, ", ", 2);
			}
			right++;
		}
		left++;
	}
}

int main()
{
	ft_print_comb2();
	return 0;
}
