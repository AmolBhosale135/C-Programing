#include<stdio.h>

int main()
{
    int i,j,s,a;
    char ch=64;
    int ab=0;
    printf("Enter Row and column you want u have:");
    scanf("%d\t%d",&s,&a);
    for ( i = 1; i<=s; i++)
    {
        for ( j = 1; j<=i; j++)
        {
            if (!(i%2==0))
            {
                ch++;
            printf("%c\t",ch);
                
            }
            else if (i%2==0)
            {
                ab++;
             printf("%d\t",ab);  
            }
            
           
            
        }
        printf("\n");
    }
    
    return 0;
}