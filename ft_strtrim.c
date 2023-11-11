#include <stdlib.h>
int ft_strlen(char *str)
{
    int i;

    i = 0;

    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}
static int search(char const c, char  const *str)
{
    int i;
    
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == c)
        return (1);
        i++;
    }
    return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
    int i;
    int j;
    int index;
    char *res;

    i = 0;
    j= ft_strlen((char*)s1) -1;
    index = 0;
    while (s1[i] != '\0' && search(s1[i], set))
    {
        i++;        
    }
    while (j>= 0 && search(s1[j], set))
    {
        j--;
    }
    res = (char *)malloc((ft_strlen((char*)s1)+1)*sizeof(char));
    if (!res)
    {
        return (NULL);
    }
    while (i<=j)
    {
        res[index] = s1[i];
        i++;
        index++;
    }
    res[index] = '\0';
    return (res);
}
#include <stdio.h>
int main()
{
    const char st[] = "";
    const char this[] = "aehri";
    char *res;
    res = ft_strtrim(st, this);

 
        printf("%s\n", res);
        free(res); 
    return 0;
}





