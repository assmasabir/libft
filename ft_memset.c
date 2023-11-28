#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		((char *)ptr)[i] = (char)value;
		i++;
	}
	return (ptr);
}
