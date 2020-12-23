//pallindrome number
#include<stdio.h>
void main()
{
	int number, rev, rem, n;
	printf("Enter a 5 digit number: ");
	scanf("%d", &number);
	n=number;
	while(n>0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n/=10;
	}
	printf("Reverse of the number is: %d", rev);
	if(rev==number)
	{
		printf("\nIts a pallindrome number");
	}
	else
	{
		printf("\nIts not a pallindrome number");
	}
}
