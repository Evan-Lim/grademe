#include <unistd.h>

void ft_putnbr(int nb)
{
	long n;
	char c;
	
	n = nb;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
	}
	c = (n % 10) + '0';
	write(1, &c, 1);
}

void ft_putstr(int n)
{
	char *str;
	int i;

	i = 0;
	if (n == 1)
		str = "Fizz";
	if (n == 2)
		str = "Buzz";
	if (n == 3)
		str = "FizzBuzz";
	while (str[i])
		write(1, &str[i++], 1);
}

int	main(int argc, char **argv)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (i % 15 == 0)
			ft_putstr(3);
		else if (i % 3 == 0)
			ft_putstr(1);
		else if (i % 5 == 0)
			ft_putstr(2);
		else
			ft_putnbr(i);
		write(1, "\n", 1);
		i++;
	}
	(void)argc;
	(void)argv;
	return (0);
}
