char *ft_strchr(const char *s, int c)
{
    int i;
    

    i = strlen(s) -1;
    while (i>=0)
    {
        if (s[i] == c)
        return ((char* )(s+i));
        i--;
    }
    return (0);
}