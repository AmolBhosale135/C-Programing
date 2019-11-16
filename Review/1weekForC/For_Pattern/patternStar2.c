#include<stdio.h>

int main()
{
    int i,j,k,l,n;
    int a=1;
    
    printf("Enter  no");
    scanf("%d",&n);    

    for ( i = 1; i<=n; i++)
    {

        for ( j = n-1; j>=i; j--)
        {
              printf(" ");
             }
            for ( k = 1; k<=i; k++)
            {
            printf("%d ",a);
            if ((k>=1)||(k==j))
              {
                printf("%d ",++a);
              }
                
            }
                   
       
            printf("\n");
        
    }
    
    
    return 0;
}