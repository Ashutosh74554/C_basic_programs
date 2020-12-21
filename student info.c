//student info
#include<stdio.h>
void main()
{
	char name[20], section[2];
	int roll;
	printf("Enter your 1st name, roll number and section: ");
	scanf("%s %d %s", &name, &roll, &section);
	printf("Name: %s", name);
	printf("\nRoll number: %d", roll);
	printf("\nSection: %s", section);
	
}
