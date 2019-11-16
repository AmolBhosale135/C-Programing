#include<stdio.h>

int main()
{
    int i, n,first,last,temp,a;

    printf("Enter Any no");
    scanf("%d",&n);
        temp=n;

    for ( i = 1; i<=n; i++)
    {
       


    last=n%10;

        first=n%10;
        // printf("Inside-Loop%d\n",first);

        n=n/10;


    }


       printf("First_no %d\n",last);
        a=temp%10;
        printf("Last_no%d\n",a);
        

    return 0;
}