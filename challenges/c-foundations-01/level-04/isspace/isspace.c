int	isspace(int c)
{
	if (c == ' ' || ( c >= 9 && c <= 13))
		return (1);
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", isspace(' '));
	printf("%d\n", isspace('\v'));
	printf("%d\n", isspace('a'));
	printf("%d\n", isspace('b'));
	printf("%d\n", isspace('c'));
}
*/