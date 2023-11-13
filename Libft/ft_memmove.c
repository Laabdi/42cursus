#include "libft.h"
void *memmove(void *dest, const void *src, size_t n)
{
    unsigned char *d;
    const unsigned char *s;
    d = (unsigned char*)dest;
    s = (const unsigned char*)src;
    if(!d || !s)
    return(NULL);
    if(d > s && d < s + n)
    {
        while(n > 0)
        {
            d[n] = s[n];
            n--;
        }
    }
    else
    memcpy(d,s,n);
    return(dest);

}
