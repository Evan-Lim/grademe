#include <unistd.h>

int ft_atoi(char *str)
{
	int i = 0;
	int sign = 1;
	int result = 0;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (sign * result);
}

void	ft_putnbr(int nb)
{
	long n = nb;
	char c;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n > 9)
		ft_putnbr(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	if (argc >= 2)
	{
		int i = 1;
		int sum = 0;
		while (i < argc)
		{
			sum = sum + ft_atoi(argv[i]);
			i++;
		}
		ft_putnbr(sum);
	}
	else
		ft_putnbr(0);
	write(1, "\n", 1);
	return (0);
}
