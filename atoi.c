#include "push_swap.h"

static int	is_whitespace(char str)
{
	if ((str >= 9 && str <= 13) || (str == 32))
		return (1);
	else
		return (0);
}

static int	is_sign(char str)
{
	if ((str == '-') || (str == '+'))
		return (1);
	else
		return (0);
}

int	custom_atoi(char *str) {
	int				i;
	int				sign;
	unsigned int	res;

	sign = 1;
	i = 0;
	res = 0;
	while (is_whitespace(str[i]) == 1)
		i++;
	if (is_sign(str[i]) == 1)
		if (str[i++] == '-')
			(sign = -1);
	while (is_digit(str[i]))
		res = res * 10 + str[i++] - '0';
	return ((int)(res) *sign);
}