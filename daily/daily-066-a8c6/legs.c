int	touchdown(const int *sensor, int n, int armed)
{
	int i = 0;
	while (i < n)
	{
		if (i != n - 1 && i >= armed)
		{
			if (sensor[i] == 1 && sensor[i + 1] == 1)
				return (i);
		}
		i++;
	}
	return (-1);
}
