//hollow rhombus pattern
#include<stdio.h>  
void main()  
{  
    int n;  
    printf("Enter the number of rows: ");  
    scanf("%d",&n); 
	int i,j,k; 
    for(i=n;i>=1;i--)  
    {  
        for(j=1;j<=i-1;j++)  
        {  
            printf("  ");  
        }  
        for(k=1;k<=n;k++)  
        {  
           if(i==1 || i==n || k==1 || k==n)  
            printf("* ");  
            else  
            printf("  ");   
        }  
        printf("\n");  
    }   
}  
