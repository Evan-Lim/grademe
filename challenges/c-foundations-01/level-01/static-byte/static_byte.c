#include <unistd.h>

int	main(int argc, char **argv)
{
	write(1, "e", 1);
	write(1, "\n", 1);
	(void)argc;
	(void)argv;
	return (0);
}
