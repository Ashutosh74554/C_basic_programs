//vote eligibility
#include<stdio.h>
void main()
{
	int age;
	printf("Enter your age: ");
	scanf("%d", &age);
	if(age>=18)
		printf("You can vote");
	else if(age<1)
		printf("Wrong input");
	else
		printf("Sorry. You are still a child");
}
