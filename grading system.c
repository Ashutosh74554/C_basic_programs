//grading system
#include<stdio.h>
void main()
{
	int phy, chem, bio, maths, cs;
	float percentage;
	char name[10];
	printf("Enter your name: ");
	scanf("%s", &name);
	printf("Enter Physics marks: ");
	scanf("%d", &phy);
	printf("Enter Chemistry marks: ");
	scanf("%d", &chem);
	printf("Enter Biology marks: ");
	scanf("%d", &bio);
	printf("Enter Mathematics marks: ");
	scanf("%d", &maths);
	printf("Enter Computer Science marks: ");
	scanf("%d", &cs);
	percentage=(phy+chem+bio+maths+cs)/5;
	printf("Your percentage is %f %", percentage);
	if(percentage>=90 && percentage<=100)
	{
		printf("\nGrade: A");
	}
	else if(percentage>=80 && percentage<90)
	{
		printf("\nGrade B");
	}
	else if(percentage>=70 && percentage<80)
	{
		printf("\nGrade C");
	}
	else if(percentage>=60 && percentage<70)
	{
		printf("\nGrade D");
	}
	else if(percentage>=40 && percentage<60)
	{
		printf("\nGrade E");
	}
	else if(percentage >=0 && percentage<40)
	{
		printf("\nGrade F");
	}
	else
	{
		printf("\nWrong input. Check your marks again");
	}
}
