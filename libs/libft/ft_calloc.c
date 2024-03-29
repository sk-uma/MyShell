#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*memory;

	memory = (void *)malloc(count * size);
	if (!memory)
	{
		return (NULL);
	}
	ft_bzero(memory, count * size);
	return (memory);
}
