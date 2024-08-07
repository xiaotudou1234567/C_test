#include <stdio.h>

void yh_print(int n)
{
	int i = 0, j = 0;
	int arr[30][30] = { 0 };

	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (j == 0 || j == i)
			{
				arr[i][j] = 1;
				printf("%d ", arr[i][j]);
			}
			else
			{
				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
				printf("%d ", arr[i][j]);
			}
		}
		printf("\n");
	}

}


int main()
{
	//int a, b, c, d, e;
	//for (a = 1; a <= 5; a++)
	//{
	//	for (b = 1; b <= 5; b++)
	//	{
	//		for (c = 1; c <= 5; c++)
	//		{
	//			for (d = 1; d <= 5; d++)
	//			{
	//				for (e = 1; e <= 5; e++)
	//				{
	//					if ((b == 2) + (a == 3) == 1&&
	//						(b == 2) + (e == 4) == 1 &&
	//						(c == 1) + (d == 2) == 1 &&
	//						(c == 5) + (d == 3) == 1 &&
	//						(e == 4) + (a == 1) == 1)
	//					{
	//						if (a * b * c * d * e == 120)
	//						{
	//							printf("%d %d %d %d %d", a, b, c, d, e);
	//						}
	//					}
	//				}
	//			}
	//		}
	//	}
	//}

	//int a, b, c, d;

	//for (a = 0; a <= 1; a++)
	//{
	//	for (b = 0; b <= 1; b++)
	//	{
	//		for (c = 0; c <= 1; c++)
	//		{
	//			for (d = 0; d <= 1; d++)
	//			{
	//				if ((a==0)+(c==1)+(d==1)+(d==0)==3)
	//				{
	//					if(a+b+c+d==1)
	//						printf("%d %d %d %d", a, b, c, d);
	//				}
	//			}
	//		}
	//	}
	//}
    yh_print(10);
	return 0;
}