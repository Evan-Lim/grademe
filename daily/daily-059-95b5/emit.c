int	emit(const int *offset, const int *want, int n, int len)
{
	int	i;
	int	total;
	int available;

	i = 0;
	total = 0;
	available = 0;
	while (i < n)
	{
		if (offset[i] < len)
        {
            available = len - offset[i];
            if (want[i] < available)
                total = total + want[i];
            else
                total = total + available;
        }
        i++;
	}
	return (total);
}
