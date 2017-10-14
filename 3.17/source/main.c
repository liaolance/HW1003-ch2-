#include <stdio.h>
#include <stdlib.h>

int main()
{
	int acc;
	float bal, chrg, cred, lim;

	while (1)
	{
		printf("Enter account number (-1 to end): ");
		scanf_s("%d", &acc);

		if (acc == -1) break;

		printf("Enter beginning balance: ");
		scanf_s("%f", &bal);
		printf("Enter total charges: ");
		scanf_s("%f", &chrg);
		printf("Enter total credits: ");
		scanf_s("%f", &cred);
		printf("Enter credit limit: ");
		scanf_s("%f", &lim);

		if (bal + chrg - cred > lim)
		{
			printf("Account:\t%d\n", acc);
			printf("Credit limit:\t%.2f\n", lim);
			printf("Balance:\t%.2f\n", bal + chrg - cred);
			printf("Credit limit exceeded.\n");
		}
		printf("\n");
	}
	system("pause");
}
