#include "libft.h"
int ft_atoi(const char *nptr)
{
	int result;
	int sign;
	int i;
	i = 0;
	result = 0;
	sign  = 1;
	while(nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 12))
	i++;
	if(nptr[i] == '-')
{
	sign *= -1;
	i++;
}
if (nptr[i] == '+')
i++;
while(nptr[i] >= '0' && nptr[i] <= '9')
{
	result = result * 10 + (nptr[i] - 48);
	i++;
}
return(result * sign);
}
