#include<stdio.h>
#include<stdlib.h>
//¹Ï§Î
int main(void)
{
	int x, y;

	for (x = 4; x >= 0; x--)
	{
		for (y = 0; y < 9; y++)
		{
			if (y >= x&&y<9 - x)
			{
				printf("*");
			}
			else 
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	for (x = 1; x <= 4; x++)
	{
		for (y = 0; y < 9; y++)
		{
			if (y >= x&&y<9 - x)
			{
				printf("*");
			}
			else 
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	system("pause");
	return 0;
}