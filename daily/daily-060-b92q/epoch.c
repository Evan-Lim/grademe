int	add_seconds(int now, int add)
{
	long now_l = now;
	long add_l = add;
	long n = now_l + add_l;
	if (n > 2147483647)
		return (-1);
	return (n);
}
