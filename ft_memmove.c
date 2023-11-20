#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *d;
    unsigned char *s;
    size_t  i;

    d = (unsigned char*)dest;
    s = (unsigned char*)src;

    if(d > s)
    {
        while (n)
        {
            d[n] = s[n];
            n--;
        }
    }
    else
        ft_memcpy(dest, src, n);
    return (dest);
}