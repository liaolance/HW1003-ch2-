#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	double amount, principal, rate;
	unsigned int year;

	for (rate = .100; rate <= .121; rate += .005)
	{
		principal = 5000.0;

		printf("Interest rate: %.1f%%\n", rate * 100);
		printf("%4s%21s\n", "Year", "Amount on deposit");

		for (year = 1; year <= 15; ++year)
		{
			amount = principal * pow(1.0 + rate, year);
			printf("%4u%21.2f\n", year, amount);
		}
		printf("\n");
	}
	system("pause");
}
