
#include <stdio.h>
#include <stdlib.h>
char ch(unsigned int i, char c)
{
    if (i%2 == 0)
    {
        c = '5';
    }
    return c;
}
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
char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *res;
    unsigned int i;

    res = (char *)malloc((ft_strlen((char*)s)+1)*sizeof(char));
    if(!res)
    {
        return (NULL);
    }
    i = 0;
    while (s[i])
    {
        res[i] = f(i, s[i]);
        i++;
    }
    res[i] = '\0';
    return (res);
}
int main ()
{
    printf("%s",ft_strmapi("assmasabir",ch));
}

