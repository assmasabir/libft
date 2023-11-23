#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *d;
    unsigned char *s;

    d = (unsigned char*)dest;
    s = (unsigned char*)src;

    if(d > s)
    {
        while (n > 0)
        {
            d[n - 1] = s[n - 1];
            n--;
        }
    }
    else
        ft_memcpy(dest, src, n);
    return (dest);
}