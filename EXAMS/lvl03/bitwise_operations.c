#include <unistd.h>
#include <stdio.h>
void	bitwise_print(unsigned char bit)
{
	int i = 128;
	while (i)
	{
		if (bit & i)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		i >>= 1;
	}
	write(1, "\n", 1);
}

unsigned char	reverse_bits(unsigned char bit)
{
	unsigned char r = 0;
	int byte = 8;
	while (byte--)
	{
		r = (r << 1) | (bit & 1);
		bit >>= 1;
		bitwise_print(r);
		bitwise_print(bit);
		write(1, "--------\n", 9);
	}
	return (r);
}

unsigned char	swap_bits(unsigned char bit)
{
	unsigned char sbit = 0;
	sbit = bit << 4;
	bitwise_print(sbit);
	write(1, "--------\n", 9);
	bit >>= 4;
	bitwise_print(bit);
	write(1, "--------\n", 9);
	sbit = bit | sbit;
	bitwise_print(sbit);
	write(1, "--------\n", 9);
	return (sbit);
}

int main()
{
	reverse_bits(197);
}
