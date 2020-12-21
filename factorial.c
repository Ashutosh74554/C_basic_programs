//factorial
#include<stdio.h>
void main()
{
	int a, result=1;
	printf("Enter an integer: ");
	scanf("%d", &a);
	int i=0;
	for(i=a;i>0;i--)	
		result=result*i;
	printf("Factorial= %d", result);	
}
