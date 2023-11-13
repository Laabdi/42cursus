#include "libft.h"
char *strrchr(const char *str, int character)
{
    size_t slen = ft_strlen(str);
    while(slen > 0)
    {
    slen--;
    if(str[slen] == character)
      {       
        return((char *) (str + slen));
     }
    }
    return(NULL);
}