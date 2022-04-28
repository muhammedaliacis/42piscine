#include <unistd.h>
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int toplam;

	toplam = nb;
	while (power > 1)
	{
		toplam = toplam * nb;
		power--;
	}
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (toplam);
}


int main()
{
	printf("%d", ft_iterative_power(-2, -4));
}


