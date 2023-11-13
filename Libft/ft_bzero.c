#include "libft.h"

void bzero(void *s, size_t n)
{
    unsigned char *p;
    p = s;
    size_t i;
    i = 0;
    while(i < n)
    {
        p[i] = 0;
        i++;
    }
    return(0);
}