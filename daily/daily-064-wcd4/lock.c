void	inherit(int *out, const int *prio, int n, int base)
{
    int i = 0;
    while (i < n)
    {
        if (i == 0)
        {
            if (base > prio[i])
                out[i] = base;
            else
                out[i] = prio[i];
        }
        else
        {
            if (base > prio[i])
                out[i] = base;
            else if (prio[i] > out[i - 1])
                out[i] = prio[i];
            else
                out[i] = out[i - 1];
        }
        i++;
    }
}
