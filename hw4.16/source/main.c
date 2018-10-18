#include<stdio.h>
#include<stdlib.h>
//¹Ï§Î
int main(void)
{
	int x, y;

	printf("(A)\n");

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y <= x; y++)
		{
			printf("*");
		}
		printf("\n");
	}
	////////////////////////////////
	printf("(B)\n");

	for (x = 9; x >= 0; x--)
	{
		for (y = 0; y <= x; y++)
		{
			printf("*");
		}
		printf("\n");
	}
	////////////////////////////////
	printf("(C)\n");

	for (x = 0; x <10; x++)
	{
		for (y = 0; y <10; y++)
		{
			if (y - x >= 0)printf("*");
			else printf(" ");
		}
		printf("\n");
	}
	////////////////////////////////
	printf("(D)\n");

	for (x = 9; x >= 0; x--)
	{
		for (y = 0; y <10; y++)
		{
			if (y - x >= 0)printf("*");
			else printf(" ");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}