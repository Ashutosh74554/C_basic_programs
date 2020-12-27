//hollow right triangle
#include <stdio.h>   
void main()  
{  
    int n;  
    printf("Enter the number of rows: ");  
    scanf("%d",&n); 
	int i,j,k; 
    for(i=1;i<=n;i++)  
    {  
        for(j=1;j<=i;j++)  
        {  
        if(j==1|| i==j || i==n )  
        {  
            printf("* ");  
        }  
        else  
        printf("  ");  
        }  
        printf("\n");  
    }  
}  

