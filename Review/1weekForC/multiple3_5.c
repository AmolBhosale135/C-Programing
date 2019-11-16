#include<stdio.h>

int main()
{
    int n=5;
    int i,sum;

    for ( i = 2; i <=n; i++)
    {
        if (i%3==0 || i%5==0)
        {
            
       
        
        sum=sum+i;
        printf("%d",sum);

         }
    }
     return 0;
}