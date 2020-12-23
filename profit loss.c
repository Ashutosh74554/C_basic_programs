//profit loss
#include<stdio.h>
void main()
{
	float cp, sp, profit, loss;
	char item[20];
	printf("What is the item: ");
	scanf("%s", &item);
	printf("At what price do you buy it: ");
	scanf("%f", &cp);
	printf("At what price do you sell it: ");
	scanf("%f", &sp);		
	if(sp>cp)
	{
	    profit= sp-cp;
		printf("Profit is: %f", profit);
    }
	else if(sp<cp)
	{
	    loss= cp-sp;
	    printf("Loss is: %f", loss);
    }
	else
	    printf("Neither profit nor loss");
}
