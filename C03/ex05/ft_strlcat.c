#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dlen;
	unsigned int	slen;


	i = 0;
	j = 0;
	while (dest[j])
	{
		j++;
	}
	dlen = j;
	slen = ft_strlen(src);
	if (size == 0 || size <= dlen)
		return (slen + dlen);
	while (src[i] && i < size - dlen - 1)
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dlen + slen);
}

int main (void)
{
    char dest[] = "muham";
    char src[] = "med";
    printf("\nDöndürdüğü değer: %i\n", ft_strlcat(dest, src,8));
    printf("Dest: %s\n\n", dest);
}
