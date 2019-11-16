#include<stdio.h>

int main()
{
    int i,j,s,a,z;
    char ch=64;
    int ab=0;
    printf("Enter Row and column you want u have:");
    scanf("%d\t%d",&s,&a);
    for ( i = 1; i<=s; i++)
    {
        for ( j = 0; j<=i; j++)
        {
            // if (!(i%2==0))
            // {
            printf("*");
                z=i-1;
             if (z==j)
             {
                 ab++;
                 printf("%d",ab);
                 break;
             }
                
            // }
            // else if (i%2==0)
            // {
            //     ab++;
            //  printf("%d",ab);  
            // }
            
           
            
        }
        printf("\n");
    }
    
    return 0;
}