int max(int *tab, unsigned int len)
{
	unsigned int i;
	int max_val;

	i = 0;
	max_val = -2147483648;
	if (len == 0)
		return (0);
	while (i < len)
	{
		if (tab[i] > max_val)
			max_val = tab[i];
		i++;
	}
	return (max_val);
}
