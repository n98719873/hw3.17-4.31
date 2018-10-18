#include<stdio.h>
#include<stdlib.h>
//薪水計算(200+0.09所得)
int main(void)
{
	const float salary = 200;//薪水
	float sid = 0;//所得sales in dollars

	while (1)
	{
		printf("Enter sales in dollars(-1 to end): ");
		scanf_s("%f", &sid);
		if (sid == -1)break;
		printf("Salary is: %.2lf\n", salary + 0.09*sid);
		printf("\n");
	}
	system("pause");
	return 0;
}