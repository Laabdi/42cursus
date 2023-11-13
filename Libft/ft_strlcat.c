#include "libft.h"
size_t strlcat(char *dest, const char *src, size_t size)
{
    size_t dlen;
    size_t slen;
    size_t tlen;
    slen = ft_strlen(slen);
    dlen = ft_strlen(dlen);
    tlen =  slen + dlen;
    size_t i;
    i = 0;
    if(dlen >= size)
    return (tlen);
    while(src[i] && dlen + i < size - 1)
    {
        dest[dlen + i] = src[i];
        i++;
    }
    dest[dlen + i] = '\0';
    return(tlen);
}