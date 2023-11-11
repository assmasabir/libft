#include <string.h>
void ft_bzero(void *s, size_t n)
{
    unsigned char *p;
    size_t i;

    p = (unsigned char*)s;
    i = 0;
    while (i < n)
    {
        p[i++] = '0';
    }
}
#include <stdio.h>
int main() {
    char str[] = "Hello, world!";
   

    printf("Original String: %s\n", str);

    // Set the first 5 characters to 0 using ft_bzero
    ft_bzero(str, sizeof(str));

    printf("After ft_bzero: %s\n", str);

    return 0;
}