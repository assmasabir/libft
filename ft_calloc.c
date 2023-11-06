#include <string.h>
#include <stdlib.h>

void ft_bzero(void *s, size_t n)
{
    unsigned char *p;
    size_t i;

    p = s;
    i = 0;
    while (i < n)
    {
        p[i++] = 0;
    }
}
void *ft_calloc(size_t nmemb, size_t size)
{
    if (nmemb == 0 || size == 0)
    return (NULL);
    size_t total_size;
    void * str;

    total_size = nmemb * size;
    str = malloc(total_size);
    ft_bzero(str, total_size);
    return (str);
}
