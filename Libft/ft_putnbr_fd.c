#include "libft.h"
void ft_putnbr_fd(int n, int fd)
{
    long int nb;
    nb = (long int)n;
    if(n < 0)
    {
        ft_putchar_fd('-',fd);
        nb -= nb;
    }
    if (nb > 9)
        ft_putnbr_fd(nb / 10,fd);
        ft_putchar_fd(nb % 10,fd);
}