#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int size = end - start;
	int *tab;
	int i = 0;
	int flag = start;
	if (size < 0)
		size *= -1;
	tab = malloc(sizeof(int) * (size + 1));
	while (i <= size)
	{
		if (end - flag > 0)
			tab[i++] = start++;
		else
			tab[i++] = start--;
	}
	return (tab);
}

int	main()
{
	int *tab = ft_range(1, -3);
	int i = 0;
	while (i < 5)
		printf("%d\n",tab[i++]);
}
