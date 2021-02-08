//Fizzbuzz
#include<stdio.h>
void main()
{
	int c3=0, c5=0, i;
	for(i=1;i<=100;i++)
	{
		c3++;
		c5++;
		if(c3!=3 && c5!=5)
		{
			printf("%d", i);
		}
		else if(c3==3)
		{
			printf("fizz");
			c3=0;
		}
		if(c5==5)
		{
			printf("buzz");
			c5=0;
		}
		printf("\n");
	}
}
