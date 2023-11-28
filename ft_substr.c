#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	i;

	i = 0;
	if (!s || start >= strlen(s))
    {
        p = (char *)malloc(1 * sizeof(char));
        if (!p)
        {
            return (NULL);
        }
        p[0] = '\0';
        return p;
    }
	if (len > strlen(s + start)) 
	{
    len = strlen(s + start);	
	}

	p = (char *)malloc((len + 1) * sizeof(char));
	if (!p)
	{
		return (NULL);
	}
	while (s[start + i] != '\0' && i < len)
	{
		p[i] = s[start + i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
// #include <stdio.h>
// int main ()
// {
//     char const chr[]= "hello world";
//     char * res = ft_substr(chr,2, 3);
//     printf("%s",res);
// }