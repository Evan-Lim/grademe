// clamp must return v held inside lo and hi, and lo when the bounds are inverted.
// This file does not build yet: three diagnostics, clear them one at a time.
int	clamp(int v, int lo, int hi)
{
	int temp = 0;
	if (lo > hi)
	{
		temp = lo;
		hi = lo;
		lo = temp;
	}
	if (v < lo)
		return (lo);
	if (v > hi)
		return (hi);
	return (v);
}
