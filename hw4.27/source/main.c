#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//�C�X����<500���Ҧ������T�����T���
int main(void)
{
	int i, j, k;
	for (i = 1; i <= 500; i++)
	{
		for (j = 1; j < i; j++)
		{
			for (k = j; k < i; k++)
			{
				if (pow(j, 2) + pow(k, 2) == pow(i, 2))
				{
					printf("side 1:%d\t side 2:%d\t side 3:%d\n", j, k, i);
				}
			}
		}
	}
	system("pause");
	return 0;
}