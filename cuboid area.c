//area of cuboid
#include<stdio.h>
void main()
{
	float l,b,h;
	printf("Enter length, breadth, height of cuboid: ");
	scanf("%f %f %f", &l, &b, &h);
	printf("Area= %f", (2*l*b)+(2*l*h)+(2*b*h));
}
