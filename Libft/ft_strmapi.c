#include "libft.h"
char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *result;
    size_t i;
    i = 0;
    if(s == NULL|| f == NULL)
    return (NULL);
    result = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
    if(!result)
    return (NULL);
    while(s[i])
    {
        result[i] = (*f)(i,s[i]);
        i++;
    }
    result[i] = '\0';
    return(result);
}