#include <unistd.h>

int main()
{
	char	c1 = 'a';
	char	c2 = 'B';

	while (c2 <= 'Z')
	{
		write(1, &c1, 1);
		write(1, &c2, 1);
		c1 += 2;
		c2 += 2;
	}
	write(1, "\n", 1);
}
