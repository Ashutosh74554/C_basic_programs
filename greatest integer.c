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
		 else if(c>a)
		 {
		 	printf("3rd inetegr is greatest");
		 }
		 else
		 {
		 	printf("1st and 3rd integer are greatest");
		 }
	}
	else if(b>a)
	{
		if(b>c)
		{
			printf("2nd integer is greatest");
		}
		else if(b<c)
		{
			printf("3rd integer is greatest");
		}
		else
		{
			printf("2nd and 3rd integer are greatest");
		}
	}
	else if(a==b)
	{
		if(a==c)
		{
			printf("All the integers have same value");
		}	
		else if(c>a)
		{
			printf("3rd integer is greatest");
		}	
		else
		{
			printf("1st and 2nd integer are greatest");
		}
	}
	else if(a==c)
	{
		if(a>b)
		{
			printf("1st and 3rd integer are greatest");
		}
		else if(a<b)
		{
			printf("2nd integer is greatest");
		}
		else if(a==b)
		{
			printf("All integers have same value");
		}
	}	  
}
