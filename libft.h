#ifndef LIBFT_H
#define LIBFT_H
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void ft_bzero(void *s, size_t n);
void *ft_calloc(size_t nmemb, size_t size);
int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c );
int ft_isdigit(int c);
int ft_isprint(int c);
char *ft_itoa(int n);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);

void *ft_memset(void *ptr, int value, size_t size );
void ft_putchar_fd(char c, int fd);
void ft_putendl_fd(char *s, int fd);
void	ft_putnbr(int nb, int fd);
void ft_putstr_fd(char *s, int fd);
char **ft_split(char const *s, char c);
char *ft_strchr(const char *s, int c);
char	*ft_strdup(char *src);
void ft_striteri(char *s, void (*f)(unsigned int, char*));
char *ft_strjoin(char const *s1, char const *s2);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
int ft_strlen(char *str);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
int ft_strncmp (const char *s1, const char *s2, unsigned int n);
char * strnstr(const char *haystack, const char *needle, size_t len);
char *ft_strchr(const char *s, int c);
char *ft_strtrim(char const *s1, char const *set);
char *ft_substr(char const *s, unsigned int start, size_t len);
int ft_toloweer(int c);
int ft_toupper(int c);
int ft_atoi(const char* str);

#endif
