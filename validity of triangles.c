//validity of triangles
#include<stdio.h>
void main()
{
	float angle1, angle2, angle3;
	float side1, side2, side3;
	printf("Enter 3 angles of the triangle: ");
	scanf("%f%f%f", &angle1, &angle2, &angle3);
	printf("Enter 3 sides of the triangle: ");
	scanf("%f%f%f", &side1, &side2, &side3);
	if(angle1+angle2+angle3==180)
	{
		if(side1+side2>side3 && side1+side3>side2 && side2+side3>side1)
		{
			printf("The triangle is valid");
		}
		else
		{
			printf("The triangle is invalid on basis of length of sides");
		}
	}
	else
	{
		if(side1+side2>side3 && side1+side3>side2 && side2+side3>side1)
		{
			printf("The triangle is invalid on basis of angles");
		}
		else
		{
			printf("The triangle is not valid on basis of both angles and length of sides");
		}
	}
}
