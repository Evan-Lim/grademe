#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	char	c;

	i = 'Z';
	write(1, &i, 1);
	i--;
	while (i >= 'A')
	{
		if (i % 4 == 0)
		{
			c = i + 32;
			write(1, &c, 1);
			c = i - 1 + 32;
			write(1, &c, 1);
			i = i - 2;
		}
		else
		{
			write(1, &i, 1);
			i--;
		}
	}
	write(1, "\n", 1);
	(void)argc;
	(void)argv;
	return (0);
}