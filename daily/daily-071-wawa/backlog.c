int	backlog(const int *arrivals, int n, int rate)
{
	int queue = 0;
	int i = 0;
	while (i < n)
	{
		queue += arrivals[i];
		if (queue > rate)
			queue -= rate;
		else
			queue = 0;
		i++;
	}
	return (queue);
}