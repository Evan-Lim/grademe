#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		int i;

		i = 0;
		while (argv[1][i])
		{
			if (argv[1][i]== 'n')
			{
				write(1, &argv[1][i], 1);
				write(1, "\n", 1);
				return (0);
			}
			i++;
		}
		write(1, "\n", 1);
	}
	else
		write(1, "wrong number of arguments\n", 26);
	return (0);
}
