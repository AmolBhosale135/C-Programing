#include<stdio.h>

int main()
{
    int i,j,s,a;
    printf("Enter Row and column you want u have:");
    scanf("%d\t%d",&s,&a);
    for ( i = 1; i<=s; i++)
    {
        for ( j = 1; j<=a; j++)
        {
            if (i%2==0)
            {
            printf("A");
                
            }
            else
            {
            printf("*");
            }
            
            
        }
        printf("\n");
    }
    
    return 0;
}