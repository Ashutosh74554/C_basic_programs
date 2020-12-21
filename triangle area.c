//To calculate the area of a triangle
#include<stdio.h>
void main()
{
	float height, area, base;
	printf("Enter the height and base of the triangle: ");
	scanf("%f %f", &height, &base);
	area=0.5*base*height;
	printf("Area of the triangle = %f" , area);
}
