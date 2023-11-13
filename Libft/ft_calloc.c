#include "libft.h"

void *calloc(size_t num_elements, size_t element_size)
{
    size_t total_size;
    total_size = num_elements * element_size;
    if(total_size == 0)
    return(NULL);
    void *ptr;
    ptr = malloc(total_size);
    if(!ptr)
    return(NULL);
    ft_memset(ptr,0,total_size);
    return(ptr);

}