
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

char *ft_strjoin(char const *s1, char const *s2)
{
    int len;
    char * res;
    int i;
    int j;

    i = 0;
    j = 0;
    if (s1 == NULL && s2 == NULL)
    return (NULL);
    len = ft_strlen ((char*)s1) + ft_strlen((char*)s2);
    res = (char *)malloc ((len + 1)*sizeof(char));
    if (!res)
    {
        return (NULL);
    }
    while (s1[j] != '\0')
    {
        res[i] = s1[j];
        i++;
        j++;

    }
    j = 0;
    while (s2[j] != '\0')
    {
        res[i] = s2[j];
        i++;
        j++;
    }
    res[i] = '\0';
    return (res);
}
#include <stdio.h>
int main ()
{
    char const ch1 []= "hello hello ";
    char const ch2 []= "world";
    char *res = ft_strjoin(ch1, ch2);
    for (int i =0; res[i]!= '\0'; i++)
    printf("%c",  res[i]);
}
