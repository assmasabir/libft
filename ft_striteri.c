

void fc(unsigned int i, char* ch)
{
    if (i%2 == 0 && ch[i] != '\0') 
    {
        ch[i] = 'c';
    }
}
void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int i;

    i = 0;
    while (s[i] != '\0')
    {
        f(i, &s[i]);
        i++;
    }

}
#include<stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char ch[] = "hello iam assma";
    char *result = malloc(sizeof(ch)); 

    if (result == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    strcpy(result, ch); 

    ft_striteri(result, fc);
    printf("%s\n", result);

    free(result); 

    return 0;
}