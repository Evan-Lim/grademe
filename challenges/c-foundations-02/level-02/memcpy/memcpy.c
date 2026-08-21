#include <stddef.h>

void	*memcpy(void *dst, const void *src, size_t n)
{
	size_t i;
	unsigned char *srcc = (unsigned char *)src;
	unsigned char *destc = (unsigned char *)dst;

	i = 0;
	while (i < n)
	{
		destc[i] = srcc[i];
		i++;
	}
	return (destc);
}
