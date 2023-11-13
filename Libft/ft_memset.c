#include "libft.h"
void    *memset(void *s,int c,size_t n)
{
    unsigned char *p;
    p = s;
    unsigned char value = (unsigned char)c;
    size_t i;
    i = 0;
    while( i < n)
    {
        p[i] = value;
        i++;
    }
    return(s);
}