#include<stdio.h>

int main()
{
    // int n=0;
    // int temp;
    // while (n%2==0)
    // {
    //     temp=n;
    //     n= n+2;
    //     printf("%d",temp);
    // }


    int i,n;
    printf("Enter No");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
    {
        if (i%2==0)
        {
            printf("%d\n",i);
        }
        
    }
    
    return 0;
}