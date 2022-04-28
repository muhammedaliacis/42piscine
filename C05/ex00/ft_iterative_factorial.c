#include <unistd.h>
#include <stdio.h>
int	ft_iterative_factorial(int nb)
{
	unsigned int toplam;

	toplam = 1;
	while (nb > 0)
	{
		toplam = toplam * nb;
		nb--;
	}
	if (nb < 0)
		return (0);
	return (toplam);
}

int main()
{
	printf("%d", ft_iterative_factorial(4));
}
