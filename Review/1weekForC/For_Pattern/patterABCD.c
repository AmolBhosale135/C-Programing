#include<stdio.h>

int main()
{
    int i,j,k,l,n;
    char ch=65;
    char ab=71;
    printf("Enter  no");
    scanf("%d",&n);    

    for ( i = 1; i<=n; i++)
    {
            ch=65;
        for ( j = n; j>=i; j--)
        {
              printf("%c ",ch++);
                if (j==n-6)
                {
                  for ( k = n; k>=i; k--)
                  {
                  printf("%c ",--ch);
                  }
                  
              }
              
              
             }
           
           
       
            printf("\n");
        
    }
    
    
    return 0;
}