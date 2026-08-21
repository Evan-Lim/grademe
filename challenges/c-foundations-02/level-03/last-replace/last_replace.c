#include <unistd.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

int	main(int argc, char **argv)
{
	int i;
	int j;
	int check;

	if (argc == 4)
	{
		i = ft_strlen(argv[1]);
		j = 0;
		check = 0;
		if (ft_strlen(argv[2]) == 1 && ft_strlen(argv[3]) == 1)
		{
				while (i >= 0)
				{
					if (argv[1][i] == argv[2][j] && check == 0)
					{
						argv[1][i] = argv[3][j];
						check++;
					}
					i--;
				}
				ft_putstr(argv[1]);
		}
	}
	else
		write(1, "wrong number of arguments", 25);
	write(1, "\n", 1);
	return (0);
}
