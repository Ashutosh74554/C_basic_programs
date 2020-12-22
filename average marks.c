//average marks
#include<stdio.h>
void main()
{
	int m1, m2, m3, m4, m5, avg;
	char name[10];
	printf("Enter your name: ");
	scanf("%s", &name);
	printf("Enter your marks in 5 subjects: ");
	scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
	avg= (m1+m2+m3+m4+m5)/5;
	if(avg>75)
		printf("Well done");
	else
		printf("Needs improvement");
}
