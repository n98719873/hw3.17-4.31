#include<stdio.h>
#include<stdlib.h>
//貸款利息/天 計算
int main(void)
{
	float principal, rate = 0, days, interest;//借貸本金,利率,天數,利息

	while (1)
	{
		printf("Enter loan principal (-1 to end): ");
		scanf_s("%f", &principal);

		if (principal == -1)break;

		printf("Enter interest rate: ");
		scanf_s("%f", &rate);
		printf("Enter term of the laon in days: ");//輸入貸款天數
		scanf_s("%f", &days);

		interest = principal*rate*days / 365;

		printf("The interest interest is $%.2lf\n", interest);
		printf("\n");
	}
	system("pause");
	return 0;
}