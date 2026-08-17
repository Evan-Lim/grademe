#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		int i;
		int count;

		i = 0;
		while (argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				count = argv[1][i] - 'a';
				while (count > 0)
				{
					write(1, &argv[1][i], 1);
					count--;
				}
			}
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'z')
			{
				count = argv[1][i] - 'A';
				while (count > 0)
				{
					write(1, &argv[1][i], 1);
					count--;
				}
			}
			else
			{
				write(1, &argv[1][i], 1);
			}
			i++;
		}
		write(1, "\n", 1);
	}
	else
	{
		write(1, "wrong number of arguments", 25);
		write(1, "\n", 1);
	}
	return (0);
}
