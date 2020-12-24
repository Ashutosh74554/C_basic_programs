//electricity bill
#include<stdio.h>
void main()
{
	float unit, add, total;
	printf("Enter electricity units used: ");
	scanf("%f", &unit);
	if(unit<0)	
		total=0;
	else if(unit<=50 && unit>=0)
	    total=unit*0.50;
	else if(unit<=150 && unit>50)
	    total=unit*0.75;
	else if(unit<=250 && unit>150)
	    total=unit*1.20;
	else
	    total=unit*1.50;
	add=(total*2)/10;
	total+=add;
	printf("Total bill= %f", total);
}
