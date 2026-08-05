#include <stdlib.h>
#include <stdio.h>

int	is_alpha(char c)
{
	if (c >= 'a' && c <= 'z')
		return 1;
	else if (c >= 'A' && c <= 'Z')
		return 1;
	return 0;
}

int	ft_strlen(char *str)
{
	int i = -1;
	while(str[++i]);
	return i;
}

char	ft_shift(char c, char x)
{
	char xc = c;
	int shift = 0;
	if (x >= 'a' && x <= 'z')
		shift = x - 'a';
	if (x >= 'A' && x <= 'A')
		shift = x - 'A';
	if (c >= 'a' && c <= 'z')
		xc = 'a' + ((c - 'a' + shift) % 26);
	if (c >= 'A' && c <= 'Z')
		xc = 'A' + ((c - 'A' + shift) % 26);
	return xc;
}

char	*ft_encryption(char *str, char *key)
{
	int i = 0;
	int k = 0;
	// int km = 0;
	int kl = ft_strlen(key);
	printf("key lengh : %d\n", kl);
	char *cipher = malloc(ft_strlen(str) + 1);
	if (!cipher)
		return NULL;
	while (str[i])
	{
		if (is_alpha(str[i]))
		{
			cipher[i] = ft_shift(str[i], key[k]);
			printf("plain : %c; cipher : %c\n", str[i], ft_shift(str[i], key[k]));
			k++;
			if (k == kl)
				k = 0;
		}
		else
			cipher[i] = str[i];
		i++;
	}
	cipher[i] = '\0';
	return cipher;
}

int main()
{
	char *cipher = ft_encryption("l3ave me n0t", "odap");
	printf("%s\n", cipher);
	free(cipher);
}
