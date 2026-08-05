#include <stdio.h>
#include <stdlib.h>

int	digit_num(int nbr)
{
	int i = 1;

	while (nbr)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int nbr)
{
	int len = digit_num(nbr);
	long n = nbr;
	char *snb;
	if (n < 0 || n == 0)
	{
		len ++;
		n *= -1;
	}
	snb = malloc(len--);
	if (!snb)
		return NULL;
	snb[len--] = '\0';
	if (n == 0)
		snb[len--] = '0';
	while (n)
	{
		snb[len--] = n % 10 + '0';
		n /= 10;
	}
	if (len == 0)
		snb[len] = '-';
	return (snb);
}

int main()
{
	printf("%s\n", ft_itoa(-2147483648));
}
