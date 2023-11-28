
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_size;
	void	*str;

	if (size != 0 && nmemb > __SIZE_MAX__ / size)
		return (NULL);
	total_size = nmemb * size;

	str = (void*)malloc(total_size);
	if (str == NULL)
	return (NULL);
	ft_bzero(str, total_size);
	return (str);
}
