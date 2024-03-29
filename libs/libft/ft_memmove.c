#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*str_dst;
	unsigned char	*str_src;
	long			i;

	if (dst == NULL && src == NULL)
		return (NULL);
	str_dst = (unsigned char *)dst;
	str_src = (unsigned char *)src;
	if (str_dst > str_src)
	{
		i = len - 1;
		while (i >= 0)
		{
			str_dst[i] = str_src[i];
			i--;
		}
	}
	else
	{
		ft_memcpy(str_dst, str_src, len);
	}
	return (str_dst);
}
