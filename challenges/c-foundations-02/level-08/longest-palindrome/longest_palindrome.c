#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr(char *str)
{
    int i = 0;
    while (str[i])
    {
        ft_putchar(str[i]);
        i++;
    }
}

int ft_strlen(char *str)
{
    int len = 0;
    while (str[len])
        len++;
    return (len);
}

int main(int argc, char **argv)
{
    // 1. Check for valid argument count
    if (argc != 2)
    {
        ft_putstr("wrong number of arguments\n");
        return (0);
    }

    char *str = argv[1];
    int str_len = ft_strlen(str);

    // 2. Handle empty string
    if (str_len == 0)
    {
        ft_putchar('\n');
        return (0);
    }

    int best_start = 0;
    int max_len = 1;

    // 3. Expand around center approach
    for (int i = 0; str[i]; i++)
    {
        // Case 1: Odd-length palindromes (centered on character i)
        int left = i;
        int right = i;
        while (left >= 0 && right < str_len && str[left] == str[right])
        {
            int current_len = right - left + 1;
            if (current_len > max_len)
            {
                max_len = current_len;
                best_start = left;
            }
            left--;
            right++;
        }

        // Case 2: Even-length palindromes (centered between i and i + 1)
        left = i;
        right = i + 1;
        while (left >= 0 && right < str_len && str[left] == str[right])
        {
            int current_len = right - left + 1;
            if (current_len > max_len)
            {
                max_len = current_len;
                best_start = left;
            }
            left--;
            right++;
        }
    }

    // 4. Output the slice followed by a newline
    for (int i = 0; i < max_len; i++)
    {
        ft_putchar(str[best_start + i]);
    }
    ft_putchar('\n');

    return (0);
}