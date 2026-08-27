void	normalise(char *out, const char *id)
{
    int i = 0;
    int j = 0;
    while (id[i])
    {
        if (id[i] != '-')
        {
            out[j] = id[i];
            j++;
        }
        i++;
    }
    out[j] = '\0';
}
