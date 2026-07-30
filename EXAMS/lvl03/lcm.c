#include <stdio.h>

unsigned int	hcf(unsigned int x, unsigned int y)
{
	int i = 0;
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
}

unsigned int	lcm(unsigned int x, unsigned int y)
{
	int i = 0;
	if (x > y)
		i = x;
	else
		i = y;
	while (i < x * y)
	{
		if (i % x == 0 && i % y == 0)
			return (i);
		i++;
	}
}

int main()
{
	printf("%d", hcf(16, 32));
	printf("%d", lcm(5, 2))
}
