#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j;

	for (i = 1; i <= 3; ++i)
	{
		for (j = 1; j <= 12; ++j)
		{
			if (i == 2 && !(j == 1 || j == 12))
				printf(" ");
			else
				printf("*");
		}
		printf("\n");
	}
	system("pause");
}
