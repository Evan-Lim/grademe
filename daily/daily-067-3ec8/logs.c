int	replayed(const int *east, int en, const int *west, int wn)
{
	int i = 0;
	int j = 0;
	int count = 0;
	while (i < en && j < wn)
	{
		if (east[i] == west[j])
		{
			count++;
			j++;
		}
		i++;
	}
	return (count);
}