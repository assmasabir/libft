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
char **ft_split(char const *s, char c)
{
	char **res;
	int i;
	int j;
	int n;
	

	i = 0;
	j = 0;
	n = 0;
	res = (char **)malloc((ft_strlen((char*)s)+1)*sizeof(char*));
	if (!res)
	{
		return (0);
	}
	while (s[j] != '\0')
	{
		
		if (s[j]!=c)
		{
			res[i] = (char *)malloc(n + 1);
			if (!res[i])
			{
				while (i >= 0)
				{
					free(res[i]);
					i--;
				}
                return (NULL);
			}
            while (s[j] != '\0' && s[j] != c) {
                res[i][n] = s[j];
                j++;
                n++;
            }
			res[i][n] = '\0';
			i++;
			n = 0;
		}
		j++;
	}
    res[i] = NULL;
	return (res);                                                            
}
#include <stdio.h>
int main ()
{
	int i, j;
	char*  ch1 = "hellocicamcassma";
	char**  ch2 ;
	ch2 = ft_split(ch1,'c');
	for (i = 0; ch2[i]!= NULL; i++) {
        for (j = 0; ch2[i][j] != '\0'; j++) {
            printf("%c\t", ch2[i][j]);
        }
        printf("\n");
    }
	for (i = 0; ch2[i] != NULL; i++) {
        free(ch2[i]);
    }
    free(ch2);
	return (0);
}