#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t i;

	i = 0;
	// if (c == '\0')
	// {
	// 	while (s[i] != '\0')
	// 	{
	// 		i++;
	// 	}
	// 	return (char *)(s + i);
	// }

	while (i <= ft_strlen(s))
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i++;
	}
	return (0);
}