#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	int j;
	char ascii[256];

	i = 0;
	j = 0;
	while (ascii[i])
		ascii[i++] = 0;
	i = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			if (ascii[(unsigned char) argv[1][i]] == 0)
			{
				ascii[(unsigned char) argv[1][i]] = 1;
				write(1, &argv[1][i], 1);
			}
			i++;
		}
		while (argv[2][j])
		{
			if (ascii[(unsigned char) argv[2][j]] == 0)
			{
				ascii[(unsigned char) argv[2][j]] = 1;
				write(1, &argv[2][j], 1);
			}
			j++;
		}
	}
	write(1, "\n", 1);
}
