#include<stdio.h>

int main()
{
    int i,n,pow,temp;

     printf("Enter No Upto Pow Of this Its ");
    scanf("%d",&n);

    for ( i = 1; i<=n; i++)
    {
        
        pow=i*i;
    printf("%d\t",pow);

    }


    return 0;
}