//literacy rate
#include<stdio.h>
void main()
{
	int total;
	float men, women, literate, illiterate, litmen, litwomen, iltmen, iltwomen;
	printf("Enter total population: ");
	scanf("%d", &total);
	men=(total*52)/100;
	women= total-men;
	literate=(total*48)/100;
	illiterate=total-literate;
	litmen=(total*35)/100;
	iltmen=men-litmen;
	iltwomen=women-litwomen;
	printf("Illiterate men= %f\n", iltmen);
	printf("Illiterate women= %f", iltwomen);
}
