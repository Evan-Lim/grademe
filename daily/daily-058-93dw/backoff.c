int	backoff(const int *ok, int n)
{
	int wait_time = 0;
	int i = 0;
	if (n == 0)
		return (1);
	while (i < n)
	{
		if (ok[i] == 0)
		{
			if (wait_time == 0)
				wait_time = 1;
			if (wait_time != 32)
				wait_time  = wait_time * 2;
		}
		else
			wait_time = 1;
		i++;
	}
	return (wait_time);
}
