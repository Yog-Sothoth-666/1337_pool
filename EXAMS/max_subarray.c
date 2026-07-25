#include <unistd.h>

int	max_subarray(int arr[], int size)
{
	int i = 0;
	int result = 0;
	int maxEnd = 0;

	while (i < size)
	{
		if ((maxEnd + arr[i]) > arr[i])
			maxEnd += arr[i];
		else
			maxEnd = arr[i];

		if (maxEnd > result)
			result = maxEnd;
		i++;
		i++;
	}
	return (res)
}
