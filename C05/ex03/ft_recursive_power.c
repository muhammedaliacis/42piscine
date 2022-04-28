#include <unistd.h>
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	toplam;

	toplam = nb;
	if (power > 1)
		return ( nb * ft_recursive_power(nb , power -1));
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (toplam);	

}

int main()
{
	printf("%d", ft_recursive_power(2,2));
}
