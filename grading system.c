//grading system
#include<stdio.h>
void main()
{
	int phy, che, maths, bio, cs, total;
	float per;
	char name[20], grade[2];
	printf("Enter your name: ");
	scanf("%s", &name);
	printf("Enter physics marks:");
	scanf("%d", &phy);
	printf("Enter chemistry marks: ");
	scanf("%d", &che);
	printf("Enter maths marks: ");
	scanf("%d", &maths);
	printf("Enter bio marks: ");
	scanf("%d", &bio);
	printf("Enter Computer science marks: ");
	scanf("%d", &cs);
	total=phy+che+maths+bio+cs;
	per=(phy+che+maths+bio+cs)/5.0;
	printf("Total marks: %d\n", total);
	printf("Percentage= %2f\n", per);
	if(per<0 || per>100)
		printf("Wrong input. Enter marks again");
	else if(per>=90 && per<=100)
	    printf("Grade A");
	else if(per>=80 && per<90)
	    printf("Grade B");
	else if(per>=70 && per<80)
	    printf("Grade C");
	else if(per>=60 && per<70)
	    printf("Grade D");
	else if(per>=50 && per<60)
	    printf("Grade E");
	else
	    printf("Grade F");	
}
