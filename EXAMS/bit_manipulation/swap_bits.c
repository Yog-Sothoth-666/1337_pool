#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	i = 128;
	while(i)
	{
		if (octet / i)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		octet -= i;
		i >>= 1;
	}
}

unsigned char	swap_bits(unsigned char octet)
{
	unsigned char b = octet;
	octet >>= 4;
	b <<= 4;
	octet = octet | b;
	return (octet);
}

int main()
{
	unsigned char b;
	b = swap_bits(1);
	print_bits(b);
}
