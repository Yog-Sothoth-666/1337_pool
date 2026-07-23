#include <unistd.h>

char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	tmp;

	j = -1;
	while (str[++j]);
	j -= 1;
	i = 0;
	while (i < j)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i++;
		j--;
	}
	return (str);
}

int main()
{
	char cha[11] = "alibabanig";
	int i = 0;
	ft_strrev(cha);
	while(cha[i])
	{
		write(1, &cha[i], 1);
		i++;
	}
}
