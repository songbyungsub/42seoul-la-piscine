unsigned int	ft_strlen3(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	ft_check(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (!str[i])
		return (0);
	while (str[i])
	{
		if (ft_strlen3(str) < 2)
			return (0);
		if (str[i] == '-' || str[i] == '+' || str[i] == '\t' || str[i] == ' '
			|| str[i] == '\n' || str[i] == '\v'
			|| str[i] == '\f' || str[i] == '\r')
			return (0);
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_check_2(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	change;
	int	result;

	i = 0;
	change = 1;
	result = 0;
	if (!ft_check(base))
		return (0);
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			change *= -1;
		i++;
	}
	while (ft_check_2(str[i], base) != -1)
	{
		result = (result * ft_strlen3(base)) + (ft_check_2(str[i], base));
		i++;
	}
	return (result * change);
}
