#include <unistd.h>

int	is_power_of_2(unsigned int n)
{
	while (n != 2)
	{
		n /= 2;
		if (n % 2 == 1)
			return (0);
	}
	return (1);
}

int main()
{
	char n;
	n = '0' + is_power_of_2(164);
	write(1, &n, 1);
}
