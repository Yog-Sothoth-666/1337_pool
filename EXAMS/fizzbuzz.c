#include <unistd.h>

int main()
{
	int i = 1;
	char c = '0';
	while (i <= 100)
	{
		if (i % 15 == 0)
			write(1, "fizzbuzz", 8);
		else if (i % 5 == 0)
			write(1, "buzz", 4);
		else if (i % 3 == 0)
			write(1, "fizz", 4);
		else if (i >= 10)
		{
			c = i / 10 + '0';
			write(1, &c, 1);
			c = i % 10 + '0';
			write(1, &c, 1);
		}
		else
		{
			c = i + '0';
			write(1, &c, 1);
		}
		write(1, "\n", 1);
		i++;
	}
}
