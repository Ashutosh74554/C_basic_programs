//swapping integers
#include<stdio.h>
void main()
{
	int a, b, c;
	printf("Enter 2 numbers: ");
	scanf("%d %d", &a, &b);
	c=a;
	a=b;
	b=c;
	printf("Result after swapping is: %d %d", a, b);
}
