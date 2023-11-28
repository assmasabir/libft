#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t sized;
	size_t sizes;

	i = 0;
	sized = ft_strlen(dest);
	sizes = ft_strlen(src);
	j = sized;
	if (size == 0)
	{
		return (sizes);
	}
	if (size <= sized)
	{
		return (sizes + size);
	}
	while (i < size - sized - 1 && src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (sizes + sized);
}