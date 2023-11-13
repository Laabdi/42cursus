#include "libft.h"
char *ft_strjoin(char const *s1, char const *s2)
{
    size_t tlen;
    char *s;
    size_t i;
    size_t j;
    j = -1;
    i = -1;
    if(!s1 || !s2)
    return(NULL);
    tlen = ft_strlen(s1) + ft_strlen(s2);
    s = (char *)malloc(sizeof(char *) * tlen + 1);
    if(!s)
    return(NULL);
    while(s1[++i])
       s[i] = s1[i];
    while(s2[++j])
    s[i + j] = s2[j];
    s[i + j] = '\0';
    return(s);
}