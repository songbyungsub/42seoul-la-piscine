#ifndef FT_DO_OP_H
# define FT_DO_OP_H

# include <unistd.h>

# define DIV_MSG "Stop : division by zero"
# define MOD_MSG "Stop : modulo by zero"

int		ft_ascii_to_int(char *str);
void	ft_final_result(int nb);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);

void	add(int num1, int num2);
void	sub(int num1, int num2);
void	mul(int num1, int num2);
void	div(int num1, int num2);
void	mod(int num1, int num2);

#endif
