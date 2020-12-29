//pattern
#include<stdio.h>
void main()
{
	int n,i,j,k;
	char x='A';
	printf("Enter number of rows: ");
	scanf("%d", &n);
	for (i=0;i<=n;i++)
	{
		for(j=n;j>=i;j--)
		{
			printf("%c", x++);
		}
    	for(k=1;k<(2*i);k++)
	    {
	    	printf(" ");
	   	}
		for(j=1;j<=n;j++)
		{
			while(x>='B')
		    	printf("%c", --x);
		}
		x='A';
		printf("\n");        
	}
	
}
