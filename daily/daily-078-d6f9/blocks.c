int	wiped(unsigned int map, int from, int to)
{
	unsigned int bit = 0;
	int count = 0;
	int i = to;
	while (i >= from)
	{
		bit = map >> i;
		if (bit & 1)
			count++;
		i--;
	}
	return (count);
}
