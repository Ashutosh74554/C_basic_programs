//leap year
#include<stdio.h>
void main()
{
	int year;
	printf("Enter a calender year: ");
	scanf("%d", &year);
	if(year%4==0)
	{
		printf("Its a leap year");
	}
	else
	    printf("Not a leap year");
}
