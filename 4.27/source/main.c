#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j, k;

	for (i = 1; i <= 500; ++i)
	{
		for (j = 1; j <= 500; ++j)
		{
			for (k = 1; k <= 500; ++k)
			{
				if (i * i + j * j == k * k && i < j)
				{
					printf("%d %d %d;", i, j, k);
				}
			}
		}
	}
	system("pause");
}
