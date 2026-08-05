#include <stdlib.h>
#include <stdio.h>

int	ft_sep(char c)
{
	if (c == ' '|| (c >= '\t' && c <= '\r'))
		return 1;
	return 0;
}

int	wrd_size(char *str)
{
	int i = 0;
	while (!ft_sep(str[i]) && str[i])
		i++;
	return i;
}

int	wrd_count(char *str)
{
	int i = 0;
	int w = 0;
	while (str[i])
	{
		if (!ft_sep(str[i]) && (ft_sep(str[i + 1]) || str[i + 1] == '\0'))
			w++;
		i++;
	}
	printf("word count is %d\n", w);
	return w;
}

char	*mk_str(char *old)
{
	char *str;
	int i = 0;
	str = malloc(wrd_size(old) + 1);
	if (!str)
		return NULL;
	while (*old && !ft_sep(*old))
		str[i++] = *old++;
	str[i] = '\0';
	printf("%s\n", str);
	return str;
}

char	**ft_split(char *str)
{
	char **strs;
	int i = 0;
	int size = wrd_count(str);
	strs = malloc(sizeof(char *) * (size + 1));
	if (!strs)
		return NULL;
	while (i < size)
	{
		while (ft_sep(*str))
			str++;
		strs[i] = mk_str(str);
		printf("strs[i] : %s\n", strs[i]);
		while (!ft_sep(*str) && *str)
			str++;
		i++;
	}
	strs[i] = NULL;
	return (strs);
}

int main()
{
	char *str = "  this  is a   test  run";
	char **strs = ft_split(str);
	int i = 0;
	while(i < 5)
	{
		printf("main : %s\n", strs[i]);
		free(strs[i]);
		i++;
	}
	free(strs);
}
