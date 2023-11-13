#include "libft.h"
static int digit_count(int n)
{
    int count;
    if(n == 0)
    return(1);
    count = 0;
    while(n != 0)
    {
        n /= 10;
        count++;
    }
    return(count);
}

char *ft_itoa(int n)
{
    char *result;
    int i;
    int len;
    len = digit_count(n);
    result  = 0;
    result = (char *)malloc(sizeof(char) * len + 1);
    if(!result)
    return(NULL);
    if(n < 0)
    {
        result[0] = '-';
        i = 1;

    }
    else
    i = 0;
    while (len-- > i)
    {
        if ( n < 0)
        {
            result[len] = 48 + n % 10 *(-1);
            n /= 10;
        }
        else
        {
            result[len] = 48 + n % 10;
            n /= 10;
        }
    }
    return(result);
}