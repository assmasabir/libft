#include <string.h>
void ft_bzero(void *s, size_t n)
{
    unsigned char *p;
    int i;

    p = s;
    i = 0;
    while (i < n)
    {
        p[i++] = 0;
    }
}