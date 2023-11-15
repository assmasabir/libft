#include "libft.h"

void	ft_putnbr(int nb, int fd)
{
	if (nb == -2147483648)
	{
		ft_putchar('-', fd);
		ft_putchar('2', fd);
		ft_putnbr(147483648,fd);
	}
	else if (nb < 0)
	{
		ft_putchar('-',fd);
		nb = -nb;
		ft_putnbr(nb,fd);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10, fd);
		ft_putnbr(nb % 10, fd);
	}
	else
		ft_putchar(nb + 48, fd);
}