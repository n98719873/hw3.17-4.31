#include <stdio.h>
#include <stdlib.h>
//圖形繪畫(邊框)
int main(void)
{
	int a,b,x, y;
	scanf_s("%d%d", &a, &b);

	for (x = 0; x < a; x++)
	{
		for (y = 0; y < b; y++)
		{
			if (x == 0 || x == a - 1 || y == 0 || y == b - 1)printf("*");
			else printf(" ");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}