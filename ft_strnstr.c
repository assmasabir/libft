#include <string.h>
char * strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;

    i = 0;
    if (needle )

    while (i < len && haystack[i] != '\0' && needle[i] != '\0')
    {
        j = 0;
        if (haystack[i] == needle[i] )
        {
        while (haystack[i+j] == needle[j] && i+j < len)
        {
            j++;
            if (needle[i+j] == '\0')
            {
                return ((char*)(haystack + i));
            }    
        }      
        } 
        i++;
    }
    return (0);
}