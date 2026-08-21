int	hidden_extension_at(const char *name)
{
	int i;
	int count;
	int second_to_last;

	i = 0;
	count = 0;
	second_to_last = 0;
	while (name[i])
		i++;
	i--;
	while (name[i])
	{
		if (name[i] == '.')
		{
			if (count == 0)
				count++;
			else if (count == 1)
			{
				second_to_last = i;
				count++;
			}
			else
				count++;
		}
		i--;
	}
	if (count <= 1)
		return (-1);
	return (second_to_last);
}
