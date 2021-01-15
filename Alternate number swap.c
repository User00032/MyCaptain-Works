#include<stdio.h>
main ()
{
	printf("Enter 2 numbers : ");
	int no_1 = 0, no_2 = 0;
	scanf("%d", &no_1);
	scanf("%d", &no_2);
	printf("The numbers after swap are %d and %d", no_2, no_1);
}
