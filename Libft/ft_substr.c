#include "libft.h"
static char *ft_strcpy(char *src,char *dest)
{
    size_t i;
    i = 0;
    if (!src || !dest)
    return(NULL);
    while(src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return(dest);
}

char *ft_substr(char const *s, unsigned int start,size_t len)
{
    char *sub;
    if(!s)
    return(NULL);
    sub = (char *)malloc(sizeof(char) * (len + 1));
    if(!sub)
    return(NULL);
    ft_strcpy((char *)(s + start) , sub);
    return(sub);
}