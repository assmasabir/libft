#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    int len;
    char * res;
    int i;
    int j;

    i = 0;
    j = 0;
    if (s1 == NULL && s2 == NULL)
    return (NULL);
    len = ft_strlen ((char*)s1) + ft_strlen((char*)s2);
    res = (char *)malloc ((len + 1)*sizeof(char));
    if (!res)
    {
        return (NULL);
    }
    while (s1[j] != '\0')
    {
        res[i] = s1[j];
        i++;
        j++;

    }
    j = 0;
    while (s2[j] != '\0')
    {
        res[i] = s2[j];
        i++;
        j++;
    }
    res[i] = '\0';
    return (res);
}
