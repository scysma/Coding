#include <unistd.h>

void ft_print_alphabet(void)
{
        char a;
        a = 'z';

        while (a >= 'a')
        {
                write(1, &a, 1);
                a--;
        }
}

int main ()
{
        ft_print_alphabet();
        return 0;
}

