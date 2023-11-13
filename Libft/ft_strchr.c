#include "libft.h"
char *strchr(const char *str, int character)
{
    size_t i;
    i = 0;
    while(str[i])
    {
        if (str[i] == character)
        return(char *)(str + i);
        i++;
    }
    return(NULL);
}