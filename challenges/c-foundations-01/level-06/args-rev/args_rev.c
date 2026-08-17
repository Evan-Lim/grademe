#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc >= 2)
	{
		int i;
		int j;

		i = argc - 1;
		while (i >= 1)
		{
			j = 0;
			while (argv[i][j])
			{
				write(1, &argv[i][j], 1);
				j++;
			}
			write(1, "\n", 1);
			i--;
		}
	}
	return (0);
}
