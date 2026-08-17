char	*strcpy(char *dst, const char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

/*
#include <stdio.h>

int main(int argc, char **argv)
{
	char *dest;

	if (argc == 2)
	{
		strcpy(dest, argv[1]);
		printf("%s\n", dest);
	}
	return (0);
}
*/