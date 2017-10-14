#include <stdio.h>
#include <stdlib.h>

int main()
{
	int type, m;
	double n;

	while (1)
	{
		printf("Enter work type: (-1 to end): ");
		scanf_s("%d", &type);

		if (type == -1) break;

		switch (type)
		{
		case 1:
			printf("Salary per hour: ");
			scanf_s("%lf", &n);
			printf("Salary per week: %.2lf\n", n * 40);
			break;
		case 2:
			printf("Salary per hour: ");
			scanf_s("%lf", &n);
			printf("Work hours per week: ");
			scanf_s("%d", &m);
			printf("Salary per week: %.2lf\n", n * 40 + (m > 40 ? n * (m - 40) * 1.5 : 0));
			break;
		case 3:
			printf("Gross weekly sell: ");
			scanf_s("%lf", &n);
			printf("Salary per week: %.2lf\n", 250 + n * .057);
			break;
		case 4:
			printf("Profit per product: ");
			scanf_s("%lf", &n);
			printf("Products made: ");
			scanf_s("%d", &m);
			printf("Salary per week: %.2lf\n", m * n);
			break;
		default:
			printf("Invalid work type\n");
		}
		printf("\n");
	}
	system("pause");
}
