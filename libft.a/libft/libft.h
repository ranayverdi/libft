#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
#include <unistd.h>


int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int	ft_strncmp(char *s1, char *s2, unsigned int n);
int    ft_atoi(const char *str);

char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
char *ft_strnstr(const char *haystack, const char *needle, size_t len);
char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strjoin(char const *s1, char const *s2);

size_t	ft_strlen(const char *s);

void    ft_bzero(void *s, size_t n);
void    *ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
void *ft_calloc(size_t count, size_t size);

#endif