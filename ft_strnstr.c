#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i = 0;
    size_t j;

    if (!*needle)
        return (char *)haystack;

    while (i < len && haystack[i] != '\0')
    {
        j = 0;
        while (haystack[i + j] == needle[j] && (i + j) < len && needle[j] != '\0')
        {
            j++;
        }
        if (needle[j] == '\0')
        {
            return ((char *)(haystack + i));
        }
        i++;
    }
    return (0);
}
