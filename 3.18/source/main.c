#include <stdio.h>
#include <stdlib.h>

int main()
{
	float sale;

	while (1)
	{
		printf("Enter sales in dollars (-1 to end): ");
		scanf_s("%f", &sale);
		if (sale == -1) break;

		printf("Salary is: $%.2f\n\n", 200 + sale * 0.09);
	}
	system("pause");
}
