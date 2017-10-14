#include <stdio.h>
#include <stdlib.h>

int main()
{
	float prin, rate, ans;
	int days;

	while (1)
	{
		printf("Enter loan principal (-1 to end): ");
		scanf_s("%f", &prin);
		if (prin == -1) break;

		printf("Enter interest rate: ");
		scanf_s("%f", &rate);
		printf("Enter term of the loan in days: ");
		scanf_s("%d", &days);

		ans = prin * rate * days / 365.00;
		printf("The interest charge is $%.2f\n\n", ans);
	}
	system("pause");
}