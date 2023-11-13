#include "libft.h"
void *memchr(const void *s, int c, size_t n)
{
    unsigned char *p;
    p = (unsigned char *)s;
    unsigned char val = (unsigned char) c;
    size_t i;
    i = 0;
    while(i < n)
    {
        if (p[i] ==  val)
        return((void *)(p + i));
        i++;
    }
    return(NULL);
}
