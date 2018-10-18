#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//щ戈 
int main(void)
{
	double amount = 5000,rate;//羆计,瞯
	int year;
	for (rate = 0.1; rate < 0.125; rate = rate+0.005)
	{
		printf("%4s%21s(%.1lf)\n", "Years","Amount on deposit", rate * 100);//计,蹿肂,
		for (year = 1; year <= 15; ++year)
		{
			amount = amount*(1.0 + rate);//pow(跑计,玡计) ex:pow(1.1,2)=1.21
			printf("%4u%21.2f\n", year, amount);
		}
		amount = 5000;
		printf("\n");
	}
	system("pause");
	return 0;
}