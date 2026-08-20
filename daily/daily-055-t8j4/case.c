void	lower_ascii(char *dst, const char *s)
{
    int i;

    i = 0;
    while (s[i])
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            dst[i] = s[i] + 32;
        }
        else
            dst[i] = s[i];
        i++;
    }
    dst[i] = '\0';
}
