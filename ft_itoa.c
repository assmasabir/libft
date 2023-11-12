#include <stdlib.h>
#include <stdio.h>
static unsigned int	ft_size(int nb)
{
	unsigned int	len;
	
	len = 0;
	if (nb < 0)
		len += 1;
    if (nb == 0)
		return (1);
	while (nb != 0)
	{
		nb /= 10;
		len++;
	}
	return (len);
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


char *ft_itoa(int n)
{
    char*   res;
    int len;
    int length;


    len = ft_size(n);


    res = (char *)malloc((len+1)*sizeof(char));
     if (res == NULL)
    {
        return (NULL);
    }
    length = len;
    if (n < 0)
    {
        n = -n;
        res[0]= '-';
        len--;
         while (len > 0)
    {
        res[len]= n%10 + '0';
        len--;
        n /= 10;
    }}
    else {
        len -=1;
        while (len >= 0)
    {
        res[len]= n%10 + '0';
        len--;
        n /= 10;
    }
   
    }
     
     
    res[length] ='\0';

    return (res);
}

int main(void)
{
    int number = 1234567;  

    char *result = ft_itoa(number);

    printf("Integer: %d\n", number);
    printf("String: %s\n", result);

 
    free(result);

    return 0;
}