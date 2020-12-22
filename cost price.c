//cost price 
#include<stdio.h>
void main()
{
	int selling_price, profit;
	float cost_price;
	printf("Enter selling price of 15 items: ");
	scanf("%d", &selling_price);
	printf("Enter total profit: ");
	scanf("%d", &profit);
	cost_price=(selling_price - profit)/15;
	printf("Cost price of 1 item is: %f", cost_price);
}
