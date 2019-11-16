#include<stdio.h>

int main()
{
    int i,j,k,l,n;
    printf("Enter How many star u want");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
	{
		for(k=1;k<=(n-i);k++)
			{
			 printf("*");
			}
		for(j=1;j<=i;j++)
			{
			 printf("k");
			}
        for (l=1; l<=i; l++)
        {
            printf("N");
        }
        
            
        printf("\n");
        
        
    }
    
    return 0;
}

		
 
		