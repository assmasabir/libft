#include <string.h>                                    

 int ft_memcmp(const void *s1, const void *s2, size_t n)
 {
    size_t i;

    if (n == 0)
	{
		return (0);
	}
    while ((char )s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
 }