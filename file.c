cdint ft_strlen(char *str)
{
    int i;

    i = 0;

    while (str[i] != '/0')
    {
        i++;
    }
    return i;
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				j;

	i = 0;
	j = 0;
	while (src[j] != '\0')
	{
		j++;
	}
	if (size != 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (j);__WINT_WIDTH__
}
int ft_isalpha(int c)
{
    if ((c >= 'a' && c<= 'z') || (c >= 'a' && c<= 'z'))
    return (1);
    else 
    return (0);  
}
int ft_isdigit(int c)
{
     if (c >= '1' && c<= '9')
    return (1);
    else 
    return (0);  
}
int ft_isalnum(int c)
{
    if (ft_isalpha(c) || ft_isdigit(c))
    return(1);
    else 
    return(0);
}

int ft_isascii(int c )
{
    if (c >= 0 && c <= 127)
    return (1);
    else 
    return (0);
}

int ft_isprint(int c)
{
    if (c >= 32 && c <= 126)
    return (1);
    else
    return (0);
}

int ft_strncmp (const char *s1, const char *s2, unsigned int n)
{
    int i;

    i = 0;
    if (n == 0)
	{
		return (0);
	}
    while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

