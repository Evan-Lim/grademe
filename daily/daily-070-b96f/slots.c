int	held(const int *slots, int n, int timeout)
{
	int i = 0;
	int count = 0;
	while (i < n)
	{
		if (slots[i] != -1 && slots[i] < timeout)
			count++;
		i++;
	}
	return (count);
}