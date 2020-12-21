//tourist
#include<stdio.h>
void main()
{
	char name[20], home[20], dest[20];
	int km;
	float money;
	printf("Enter your name: ");
	scanf("%s", &name);
	printf("Enter your starting point: ");
	scanf("%s", &home);
	printf("Enter your destination: ");
	scanf("%s", dest);
	printf("Enter distance: ");
	scanf("%d", &km);
	money= km*10;
	printf("\n\nName: %s", name);
	printf("\nStart point: %s", home);
	printf("\nDestination: %s", dest);
    printf("\nTotal fare= %f", money);
}
