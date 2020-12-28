//right arrow pattern
#include <stdio.h>  
  
void main()  
{  
    int n,m=1,i,j,k,l;  
    printf("Enter the number of columns: ");  
    scanf("%d",&n);  
for(i=1;i<=n;i++)  
{  
  for(j=1;j<=i;j++)  
  {  
    printf("* ");  
  }  
  printf("\n");  
}  
 for(k=n-1;k>=1;k--)  
 {  
   for(l=1;l<=k;l++)  
   {  
     printf("* ");  
   }  
   printf("\n");  
 }    
}  
