#include <unistd.h>
#include <stdlib.h>
int	*ft_range(int min, int max)
{
	int	len;
	int	i;
	int	*d;

	if (min >= max)
		return (0);
	len = max - min;
	d = malloc(len * sizeof(int));
	if (!d)
		return (0);
	i = 0;
	while (i < len)
	{
		d[i] = min + i;
		i++;
	}
	return (d);
}
#include <stdio.h>
int main()
{
	int *tab;
	int i = 0;
	int x = 5;
	int y = 10;

	tab = ft_range(x, y);
	while (i < y - x)
	{
		printf("%d, ", tab[i]);
		i++;
	}

}





