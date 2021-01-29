#include<stdio.h>
int main()
{
	int marks;
	printf("Enter marks obtained: ");
	scanf("%d", &marks);
	if (marks <100 && marks >= 85)
	
	printf (" Grade A");
    
	else if (marks < 85 && marks >= 70)
	printf (" Grade B");
	else if (marks < 69 && marks >= 50)
	printf (" Grade C");
	else if (marks < 54 && marks >= 54)
	printf ("Grade D");
	else if (marks < 40 && marks >= 0)
	printf ("Grade F");
	else 
	printf("enter correct marks");
	return 0;
}
