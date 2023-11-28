#include "libft.h"
#include <string.h>

static int number_of_strings(const char *str, char c) {
    int i = 0;
    int len = 0;

    if (!str)
        return 0;

    while (str[i] != '\0') {
        while (str[i] == c)
            i++;

        if (str[i] && str[i] != c)
            len++;

        while (str[i] && str[i] != c)
            i++;
    }

    return len;
}

static char *ft_strndup(const char *str, int n) {
    int j = 0;
    char *dest;

    if (str == NULL)
        return NULL;

    dest = (char *)malloc(sizeof(char) * (n + 1));
    if (!dest)
        return NULL;

    while (str[j] != '\0' && j < n) {
        dest[j] = str[j];
        j++;
    }

    dest[j] = '\0';
    return dest;
}

static void freeTab(char **tab) {
    int i = 0;
    while (tab[i] != NULL) {
        free(tab[i]);
        i++;
    }
    free(tab);
}

char **ft_split(const char *s, char c) {
    char **res;
    int i = 0;
    int j = 0;
    int n = number_of_strings(s, c);

    res = (char **)malloc((n + 1) * sizeof(char *));
    if (!res)
        return NULL;
    while (s[j] != '\0')
	{
        while (s[j] == c)
            j++;
        if (s[j])
		{
            int len = 0;
            while (s[j + len] && s[j + len] != c)
                len++;
            res[i] = ft_strndup(s + j, len);
            if (!res[i]) 
			{
                freeTab(res);
                return NULL;
            }
            i++;
            j += len;
        }
    }

    res[i] = NULL;
    return res;
}

// #include <stdio.h>
// int main ()
// {
// 	int i, j;
// 	char*  ch1 = "hello i am assma";
// 	char**  ch2 ;
// 	ch2 = split(ch1,' ');
// 	for (i = 0; ch2[i]!= NULL; i++) {
// 		for (j = 0; ch2[i][j] != '\0'; j++) {
// 			printf("%c", ch2[i][j]);
// 		}
// 		printf("\n");
// 	}
// 	for (i = 0; ch2[i] != NULL; i++) {
// 		free(ch2[i]);
// 	}
// 	free(ch2);
// 	return (0);
// }