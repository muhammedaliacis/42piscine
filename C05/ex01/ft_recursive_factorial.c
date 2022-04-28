#include <unistd.h>
#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	unsigned int toplam;

	if (nb > 0)
		toplam = nb * ft_recursive_factorial(nb - 1);
	else if (nb <= 0)	
		return (0);
	return (toplam);
}

int main()
{
	printf("%d", ft_recursive_factorial(0));
}




