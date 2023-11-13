#include "libft.h"
char *strnstr(const char *haystack, const char *needle, size_t len)
{    
    size_t tlen;
    if(!haystack || !needle)
    return(NULL);
    tlen =  ft_strlen(needle);
    while(*haystack && len >= tlen)
    {
        if(ft_strncmp(haystack,needle,tlen) == 0)
        return((char *)haystack);
        haystack++;
    }
    return (NULL);
}