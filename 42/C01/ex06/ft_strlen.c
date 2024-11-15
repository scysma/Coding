#include <stdio.h>

int ft_strlen(char *str)
{
	int	result;

	result = 0;
	while (str[result])
		result++;
	return (result);
}
	
int main()
{
	printf("%i\n", ft_strlen("cane"));
}
		
