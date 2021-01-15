#include<stdio.h>
main()
{
	printf("Enter Two Numbers : ");
	int no_1 = 0, no_2 = 0;
	scanf("%d", &no_1);
	scanf("%d", &no_2);
	no_1 = no_1 + no_2;
	no_2 = no_1 - no_2;
	no_1 = no_1 - no_2;
	printf (" Therefore the numbers are %d and %d", no_1, no_2);
}
