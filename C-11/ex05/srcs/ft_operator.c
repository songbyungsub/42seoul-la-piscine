#include "ft_do_op.h"

void	add(int num1, int num2)
{
	ft_putnbr(num1 + num2);
}

void	sub(int num1, int num2)
{
	ft_putnbr(num1 - num2);
}

void	mul(int num1, int num2)
{
	ft_putnbr(num1 * num2);
}

void	div(int num1, int num2)
{
	if (num2 == 0)
		ft_putstr(DIV_MSG);
	else
		ft_putnbr(num1 / num2);
}

void	mod(int num1, int num2)
{
	if (num2 == 0)
		ft_putstr(MOD_MSG);
	else
		ft_putnbr(num1 % num2);
}
