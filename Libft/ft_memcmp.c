#include "libft.h"
int ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
    unsigned char *p1;
    unsigned char *p2;
    p1 = (unsigned char *)ptr1;
    p2 = (unsigned char *)ptr2;
    size_t i;
    i = 0;
    if(!p1 || !p2)
    return(0);
    while( i < num)
    {
        if( p1[i] != p2[i])
        return(p1[i] - p2[i]);
        i++;
    }
    return(0);
 }