//perimeter and area
#include<stdio.h>
void main()
{
	int length, breadth, area, perimeter;
	printf("Enter the length of rectangle: ");
	scanf("%d", &length);
	printf("Enter the breadth of rectangle: ");
	scanf("%d", &breadth);
	area=length*breadth;
	perimeter=2*(length+breadth);
	if(area<perimeter)
	    printf("Perimeter is greater than area");
	else if(area==perimeter)
	    printf("Area and perimeter are equal");	
	else
	    printf("Area is greater than perimeter");
}
