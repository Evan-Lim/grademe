#include <unistd.h>

int	main(int argc, char **argv)
{
	char *str;
	str = "Hello World!";
	int i;
	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
	(void)argc;
	(void)argv;
	return (0);
}
