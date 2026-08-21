unsigned char reverse_bits(unsigned char byte)
{
	unsigned char res;
	int i;

	res = 0;
	i = 0;
	while (i < 8)
	{
		res = ((res << 1) | (byte & 1));
		byte >>= 1;
		i++;
	}
	return (res);
}
