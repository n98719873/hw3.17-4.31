#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//��� ���Q
int main(void)
{
	double amount = 5000,rate;//�`��,�Q�v
	int year;
	for (rate = 0.1; rate < 0.125; rate = rate+0.005)
	{
		printf("%4s%21s(%.1lf)\n", "Years","Amount on deposit", rate * 100);//�~��,�s�ڪ��B,���Q
		for (year = 1; year <= 15; ++year)
		{
			amount = amount*(1.0 + rate);//pow(�ܼ�,�e�̪�����) ex:pow(1.1,2)=1.21
			printf("%4u%21.2f\n", year, amount);
		}
		amount = 5000;
		printf("\n");
	}
	system("pause");
	return 0;
}