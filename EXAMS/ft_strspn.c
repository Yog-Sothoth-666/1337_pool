#include <unistd.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	int i = 0;
	size_t count = 0;
	int found = 0;
	int j;

	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				count++;
				found = 1;
				break;
			}
			j++;
		}
		if (found)
			found = 0;
		else
			return(count);
		i++;
	}
	return (count);
}

int	main()
{
	char *s = "sftdug";
	char *accept = "1234sddft";
	int c;
	char ct;

	c = ft_strspn(s, accept);
	ct = c + '0';
	write(1, &ct, 1);
}
