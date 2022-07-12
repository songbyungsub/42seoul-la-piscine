#include "ft_do_op.h"

int	ft_ascii_to_int(char *str)
{
	int	i;
	int	m;
	int	result;

	i = 0;
	m = 1;
	result = 0;
	while ((9 <= str[i] && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			m *= -1;
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (m * result);
}

void	ft_final_result(int nb)
{
	char	nbr[10];
	int		i;

	i = 0;
	while (nb != 0)
	{
		nbr[i] = nb % 10 + '0';
		nb /= 10;
		i++;
	}
	i--;
	while (i >= 0)
	{
		write(1, &nbr[i], 1);
		i--;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			write(1, "-2147483648", 11);
			return ;
		}
		else
		{
			write(1, "-", 1);
			nb *= -1;
		}
	}
	ft_final_result(nb);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}
