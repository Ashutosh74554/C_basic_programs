//result
#include<stdio.h>
void main()
{
	char name[20];
	int marks;
	printf("Enter your name: ");
	scanf("%s", &name);
	printf("Enter your marks: ");
	scanf("%d", &marks);
	if(marks>=35 && marks<=100)
	{
		printf("You passed the exam. Congrats");
	}
	else if(marks>100)
	{
		printf("Wrong input.");
	}
	else
	{
		printf("Sorry. Try again next time");
	}	
}
