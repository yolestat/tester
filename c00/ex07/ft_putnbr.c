#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	ft_putchar(char c)
{
	write(1, &c, 1);
	return 0;
}

int	ft_putnbr(int nb)
{
	char	cnb[12] = {'a'};
	int		i;

	sprintf(cnb, "%d", nb);
	i = 0;
	while (i <= 11)
	{
		if ((cnb[i] >= '0') && (cnb[i] <= '9'))
		{
			ft_putchar(cnb[i]);
		}
		i++;
	}
	write(1, "\n", 1);
	return 0;
}

int	main(void)
{
	ft_putnbr(42);
	return 0;
}
