#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;
	int j;
	char ascii[256];

	i = 0;
	while (ascii[i])
		ascii[i++] = 0;
	i = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			j = 0;
			while (argv[2][j])
			{
				if (argv[1][i] == argv[2][j])
				{
					if (ascii[(unsigned char) argv[1][i]] == 0)
					{
						ascii[(unsigned char) argv[1][i]] = 1;
						write(1, &argv[1][i], 1);
					}
				}
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
}
