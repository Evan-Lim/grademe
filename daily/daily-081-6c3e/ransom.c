int	ransom(int hours)
{
	if (hours < 72)
		return (300);
	if (hours >= 72 && hours < 168)
		return (600);
	return (-1);
}
