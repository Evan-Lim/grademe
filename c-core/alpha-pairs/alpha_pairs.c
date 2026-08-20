#include <unistd.h>

int	main(int argc, char **argv)
{
	char i;
	char c;

	i = 'a';
	c = 0;
	while (i <= 'z')
	{
		if (i % 2 != 0)
		{
			write(1, &i, 1);
			write(1, &i, 1);
		}
		else
		{
			c = i - 32;
			write(1, &c, 1);
			write(1, &c, 1);
		}
		i++;
	}
	write(1, "\n", 1);
	(void)argc;
	(void)argv;
	return (0);
}
