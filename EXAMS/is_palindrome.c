#include <unistd.h>

int	is_palindrome(int n)
{
	int tab[10];
	int i = 0;
	int j = 0;
	if (n < 0)
		return (0);
	else
	{
		while (n)
		{
			tab[i++] = n % 10;
			n /= 10;
		}
		i--;
		while (j < i)
		{
			if (tab[i--] == tab[j++]);
			else
				return (0);
		}
	}
	return (1);
}

int main()
{
	char is;
	is = is_palindrome(234565437) + '0';
	write(1, &is, 1);
}
