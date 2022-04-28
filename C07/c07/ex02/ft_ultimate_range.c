#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	if (max <= min)
	{
		*range = 0;
		return (0);
	}
	size = max - min;
	*range = malloc(size * sizeof(int));
	if (!*range)
	{
		*range = 0;
		return (-1);
	}
	i = 0;
	while (i < size)
	{
		(*range)[i++] = min++;
	}
	return (size);
}
#include <stdio.h>
int		main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	size;
	int	i = 0;

	min = 5;
	max = 20;
	size = ft_ultimate_range(&tab, min, max);
	while(i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}

}
