#include "libft.h"

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