#include "libft.h"

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*dest;

	j = 0;
	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	dest = (char *)malloc(sizeof(char) * (i + 1));
	if (!dest)
		return (NULL);
	while (src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}