static int	ft_isspace(char c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

static int	ft_isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int	bank;
	int sign;

	bank = 0;
	sign = 1;

	while (ft_isspace(*nptr))
		nptr++;
	if (*nptr == '+' || *nptr == '-')
	{
		sign += (-2 * (*nptr == '-'));
		nptr++;
	}
	while (ft_isdigit(*nptr))
	{
		bank *= 10;
		bank += sign * (*nptr - 48);
		nptr++;
	}
	return (bank);
}
