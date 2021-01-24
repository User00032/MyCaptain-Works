#include<stdio.h>
main()
{
	printf("Enter a number \n");
	int a=0;
	scanf("%d", &a);
	switch (a)
	{
		case 1:
			printf(" Food Item = Burger \n Price = Rs. 130");
			break;
		case 2:
			printf(" Food Item = pasta \n Price = Rs. 180");
			break;
		case 3:
			printf(" Food item = French Fries \n Price = Rs. 100");
			break;
		case 4:
			printf(" Food Item = Pizza \n Price = Rs. 240");
			break;
		case 5:
			printf(" Food Item = Ice Cream \n Price = Rs. 150");
			break;
		default:
			printf(" Food Item = nothing \n Price = Starvation");
			break;
	}
	return 0;
}
