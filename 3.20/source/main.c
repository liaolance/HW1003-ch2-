#include <stdio.h>
#include <stdlib.h>

int main()
{
	int days;
	float rate;

	while (1)
	{
		printf("Enter # of hours worked (-1 to end): ");
		scanf_s("%d", &days);

		if (days == -1) break;
		printf("Enter hourly rate of the worker ($00.00): ");
		scanf_s("%f", &rate);
		printf("Salary is $%.2f\n\n", days * rate);
	}
	system("pause");
}
