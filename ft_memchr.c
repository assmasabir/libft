#include <string.h>
#include <stdio.h>
void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;

    i = 0;
    while (i < n)
    {
        if (((unsigned char *)s)[i] == ( unsigned char)c )   
        return ((void * )(unsigned char*)s+i);
        else 
        i++;  
    }
    return (NULL);
}
int main()
{
    const char myString[] = "Hello, World!";
    char characterToFind = 'W';

    void *result = memchr(myString, (int)characterToFind, sizeof(myString));
    if (result != NULL)
    {
        printf("Character found at position: %ld\n", (char *)result - myString);
    }
    else
    {
        printf("Character not found\n");
    }
    return 0;
}