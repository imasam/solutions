#include <stdio.h>
int main() 
{
	int input = 0;
	int time[8][10000], tmp[10000], result[10000];
	int animal;
	int i, j;

	while (scanf("%d", &animal) == 1)
	{
		for (i = 0; i < 8; i++)
			for (j = 0; j < animal; j++)
				scanf("%d", &time[i][j]);

		for (j = 0; j < animal; j++)
			tmp[j] = time[0][j];

		int min = 0;
		for (j = 0; j < animal; j++)
		{
			for (i = 0; i < 8; i++)
			{
				tmp[j] = (tmp[j] < time[i][j]) ? tmp[j] : time[i][j];
			}
			min += tmp[j];
		}
		result[input++] = min;
	}
	for (i = 0; i < input; i++)
		printf("%d\n", result[i]);
	return 0;
}
