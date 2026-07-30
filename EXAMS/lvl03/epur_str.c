#include <unistd.h>

int	ft_putword(char *wrd)
{
	int i = 0;
	while(wrd[i] != ' ' && wrd[i] != '	')
		write(1, &wrd[i++], 1);
	return (i);
}

int	is_not_space(char c)
{
	if (c == ' ' || c == '	')
		return (0);
	return (1);
}

int	main(int argc, char **argv)
{
	int i = 0;
	int offset = 0;
	int space = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (is_not_space(argv[1][i]))
			{
				if (space)
					write(1, " ", 1);
				else
					space = 1;
				offset = ft_putword(&argv[1][i]);
				i += offset;
				
			}
			else
				i++;
		}
	}
	write(1, "\n", 1);
}
