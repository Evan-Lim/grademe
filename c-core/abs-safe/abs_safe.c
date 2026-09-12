// Return the absolute value of n as a long.
// Widen to long before negating, never after.
long	abs_safe(int n)
{
	long nbr = n;
	if (nbr < 0)
		return (-nbr);
	return (nbr);
}
