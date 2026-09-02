int	elapsed(int start, int now, int wrap)
{
	int i = start;
	int reading = 0;
	while (i != now && i < wrap)
	{
		i++;
		reading++;
	}
	if (i != now)
		i = 0;
	while (i != now && i < wrap)
	{
		i++;
		reading++;
	}
	return (reading);
}
