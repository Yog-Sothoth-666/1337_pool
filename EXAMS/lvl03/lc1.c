#include <stdio.h>

unsigned int pgc(unsigned int x, unsigned int y)
{
	unsigned int div;
	unsigned int up;
	if (x > y)
	{
		div = y;
		up = x;
	}
	else
	{
		div = x;
		up = y;
	}
	if (up % div == 0)
		return (div);
	return hcm(div, up % div);
}

unsigned int lcm(unsigned int x, unsigned int y)
{
	unsigned int max;
	unsigned int min;
	if (x == 1 || y == 1)
		return (x * y);
	if (x > y)
	{
		max = x;
		min = y;
	}
	else if (x == y)
		return (x);
	else
	{
		max = y;
		min = x;
	}

}

int main()
{
	printf("%u", pgc(10, 15));
}
