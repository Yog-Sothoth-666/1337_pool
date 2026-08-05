#include <unistd.h>

int main(int argc, char **argv)
{
	int l = 0;
	if (argc == 2)
	{
		while (argv[1][l])
			l++;
		while (argv[1][l] == ' ' || argv[1][l] == '	' || argv[1][l] == '\0')
			l--;
		while (argv[1][l] != ' ' && argv[1][l] != '	')
			l--;
		l++;
		while (argv[1][l] && argv[1][l] != ' ' && argv[1][l] != '	')
		{
			write(1, &argv[1][l], 1);
			l++;
		}
	}
	write(1, "\n", 1);
}
