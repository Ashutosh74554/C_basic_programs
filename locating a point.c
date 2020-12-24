//locating a point
#include<stdio.h>
void main()
{
	int x, y;
	printf("Enter the x coordinate of the point: ");
	scanf("%d", &x);
	printf("Enter the y coordinate of the point: ");
	scanf("%d", &y);
	if(x==0 && y==0)
	{
		printf("The point is at origin.");
	}
	else if(x==0 && y!=0)
	{
		printf("The point lies on Y-axis.");
	}
	else if(x!=0 && y==0)
	{
		printf("The point lies on X-axis.");
	}
	else
	    printf("The point neither lies on X-axis nor on Y-axis.");
}
