//area of cylinder
#include<stdio.h>
void main()
{
	float r, h;
	printf("Enter radius and height of cylinder: ");
	scanf("%f %f", &r, &h);
	printf("Area= %f", (2*3.14*r*h)+(2*3.14*r*r));
}
