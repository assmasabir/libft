#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int len;

	len = ft_strlen((char*)s) - 1;
	if (c == '\0')
	{
		return (char *)(s + len+1);
	}
	while (len >= 0)
	{
		if (s[len] == (char)c)
			return ((char *)(s + len));
		if(len == 0)
			return (NULL);
		len--;
	}

	return (NULL);
}
