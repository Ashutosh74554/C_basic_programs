//greatest of 3 numbers
#include<stdio.h>
void main()
{
	int a, b, c;
	printf("Enter 3 integers: ");
	scanf("%d %d %d", &a, &b, &c);
	if(a>b)
	{
		 if(a>c)
		 {
		 	printf("1st ineteger is greatest");
		 }
		 else
		 {
		 	printf("3rd inetegr is greatest");
		 }
	}
	if(b>a)
	{
		if(b>c)
		{
			printf("2nd integer is greatest");
		}
		else
		{
			printf("3rd integer is greatest");
		}
	}
	  
}
