#include <stdio.h>

unsigned int	hcf(unsigned int x, unsigned int y)
{
	unsigned int i = 0;
	if (x > y)
		i = y;
	else
		i = x;

	while (i > 0)
	{
		if (x % i == 0 && y % i == 0)
			return (i);
		i--;
	}
	return (0);
}

unsigned int	lcm(unsigned int x, unsigned int y)
{
	unsigned int i = 0;
	if (x > y)
		i = x;
	else
		i = y;
	while (i <= x * y)
	{
		if (i % x == 0 && i % y == 0)
			return (i);
		i++;
	}
	return (0);
}

int main()
{
	printf("hcf : %u\n", hcf(16, 28));
	printf("lcm : %u", lcm(2, 5));
}
