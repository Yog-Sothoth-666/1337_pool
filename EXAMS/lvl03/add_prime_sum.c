#include <unistd.h>

int	is_prime(int n)
{
	int i = 2;
	while (i < n / i)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);

}

int	ft_atoi(char *str)
{
	int	n;
	int	s;

	n = 0;
	s = 1;
	while (*str == ' ' || (*str >= '\t' && *str <= '\r' ))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			s *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		n *= 10;
		n += *str++ - '0';
	}
	return (n * s);
}

void	ft_putnbr(int nb)
{
	char	ld;

	if (nb < 0)
	{
		write(1, "-", 1);
		if (nb <= -10)
			ft_putnbr(nb / -10);
		ld = '0' - nb % 10;
		write(1, &ld, 1);
	}
	else
	{
		if (nb >= 10)
			ft_putnbr(nb / 10);
		ld = '0' + nb % 10;
		write(1, &ld, 1);
	}
}

int	main(int argc, char **argv)
{
	int i = 1;
	int n = 0;
	int sum = 0;
	if (argc == 2)
	{
		n = ft_atoi(argv[1]);
		while (i <= n)
		{
			if (is_prime(i))
				sum += i;
			i++;
		}
		ft_putnbr(sum);
	}
	else
		write(1, "0", 1);
	write(1, "\n", 1);
}
