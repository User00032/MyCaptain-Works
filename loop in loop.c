#include<stdio.h>
int main()
{
	int a, b, n;
	printf("enter a number");
	scanf("%d", &n)
	for (a = 0; a < n; ++a)
	{
		for (b = 0; b <= a; ++b)
		{
			printf("01");
		}
		printf("\n");
	}
	return 0;
}
