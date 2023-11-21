#include "libft.h"                         

 int ft_memcmp(const void *s1, const void *s2, size_t n)
 {
	unsigned char *ch1;
	unsigned char *ch2;
    size_t i;

	ch1 = (unsigned char)s1;
	ch2 = (unsigned char)s2;

    if (n == 0)
	{
		return (0);
	}
    while (i < n)
	{
		if (ch1[i] == ch2[i])
		{
			i++;
		}
	}
	return (ch1[i] - ch2[i]);
}

