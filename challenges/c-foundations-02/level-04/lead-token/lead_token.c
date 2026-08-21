#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		int i;

		i = 0;
		while (argv[1][i] && (argv[1][i] == ' ' || argv[1][i] == '\t'))
			i++;
		while (argv[1][i] && (argv[1][i] != ' ' && argv[1][i] != '\t'))
			write(1, &argv[1][i++], 1);
	}
	else
		write(1, "wrong number of arguments", 25);
	write(1, "\n", 1);
	return (0);
}
