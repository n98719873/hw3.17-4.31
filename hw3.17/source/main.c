#include<stdio.h>
#include<stdlib.h>
//�H���B��
int main(void)
{
	int account;//�b��
	float bb, charges, credits, limits,total;//��l�l�B,�s��,�U��,�W��,�`��
	while (1)
	{
		printf("Enter account number (-1 to end): ");
		scanf_s("%d", &account);
		if (account == -1)break;
		printf("Enter beginning balance: ");
		scanf_s("%f", &bb);
		printf("Enter total charges: ");
		scanf_s("%f", &charges);
		printf("Enter total credits: ");
		scanf_s("%f", &credits);
		printf("Enter credits limit: ");
		scanf_s("%f", &limits);
		total = bb + charges - credits;
		if (total > limits)
		{
			printf("Account:\t%d\n", account);
			printf("Credit limit:\t%.2lf\n", limits);
			printf("Balance:\t%.2lf\n", total);
			printf("Credit Limit Exceeded.\n");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}