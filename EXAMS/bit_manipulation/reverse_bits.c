#include <unistd.h>
#include <stdio.h>
unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	r = 0;
	int				bitl = 8;
	while (bitl--)
	{
		r <<= 1;
		if (octet % 2)
			r += 1;
		octet >>= 1;
	}
	return (r);
}

unsigned char	reverse_bits_bitwise(unsigned char octet)
{
	unsigned char	r = 0;
	int				bit = 8;
	while (bit--)
	{
		r = (r << 1) | (octet & 1);
		octet >>= 1;
	}
	return (r);
}

int	main()
{
	int b = reverse_bits_bitwise(1);
	printf("%d", b);
}
