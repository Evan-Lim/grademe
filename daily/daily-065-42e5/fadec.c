int	top_fault(unsigned int flags, unsigned int mask)
{
	int fault = -1;
	unsigned int i = flags & mask;
	while (i > 0)
	{
		fault++;
		i >>= 1;
	}
	return (fault);
}
