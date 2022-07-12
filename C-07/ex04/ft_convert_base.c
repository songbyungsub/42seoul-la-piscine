#include <stdlib.h>

unsigned int	ft_strlen3(char *str);
int				ft_check(char *str);
int				ft_check2(char c, char *str);
int				ft_atoi_base(char *str, char *base);

int	count_base(unsigned int i, char *base)
{
	int	len;

	len = 0;
	while (i >= ft_strlen3(base))
	{
		i /= ft_strlen3(base);
		len++;
	}
	return (len + 1);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	unsigned int	number_1;
	int				number_2;
	int				len;
	char			*str;

	if (!ft_check(base_from) || !ft_check(base_to))
		return (0);
	number_2 = ft_atoi_base(nbr, base_from);
	if (number_2 < 0)
		number_1 = -number_2;
	else
		number_1 = number_2;
	len = count_base(number_1, base_to) + ((number_2 < 0));
	str = malloc(sizeof(char) * (len + 1));
	str[len] = 0;
	while (len--)
	{
		str[len] = base_to[number_1 % ft_strlen3(base_to)];
		number_1 /= ft_strlen3(base_to);
	}
	if (number_2 < 0)
		str[0] = '-';
	return (str);
}
