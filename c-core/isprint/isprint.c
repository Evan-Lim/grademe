int	gm_isprint(int c)
{
	return (!(c < 32 || c == 127));
}
