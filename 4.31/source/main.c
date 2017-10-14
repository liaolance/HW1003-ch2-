#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j;

	for (i = 1; i <= 9; ++i)
	{
		for (j = 1; j <= (i > 5 ? i - 5 : 5 - i); ++j)
		{
			printf("\x20");
		}
		for (j = 1; j <= (i > 5 ? 10 - i : i) * 2 - 1; ++j)
		{
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}