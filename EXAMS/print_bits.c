#include <unistd.h>

int	power_of(int x)
{
	int pow = 1;
	int i = 0;
	if (x == 0)
		return (1);
	while(i < x)
		pow *= 2;
	return (pow);
}

void	print_bits(unsigned char octet)
{
	char bit[8];
	int i = 0;

	while(i < 8)
	{
		bit[i] = octet % 2;
		octet /= 2;
	}
	while(i != -1)
		write(1, &bit[i--], 1);
}

int main()
{
	print_bits(64);
}
