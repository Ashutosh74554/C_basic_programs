//greatest of 2 integers
#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter 1st number: ");
	scanf("%d", &a);
	printf("Enter 2nd number: ");
	scanf("%d", &b);
	if(a>b)
		printf("First number is greater");
	else if(b>a)
		printf("Second number is greatest");
	else
		printf("Both are same");
}
