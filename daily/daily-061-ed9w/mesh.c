int	first_rise(const int *mesh, int w, int h)
{
	int r = 1;
	while (r < h)
	{
		int c = 0;
		while (c < w)
		{
			if (mesh[r * w + c] > mesh[(r - 1) * w + c])
				return (r);
			c++;
		}
		r++;
	}
	return (-1);
}
