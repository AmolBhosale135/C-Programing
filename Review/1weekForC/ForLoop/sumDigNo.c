#include<stdio.h>

int main()
{
    int i, n,temp,sum;

    printf("Enter Any no");
    scanf("%d",&n);
    for ( i = 0; i<n; i++)
    {
       sum=i;
       temp=sum+i;

    }
    printf("%d\n",temp);
    printf("Loop %d\n",sum);    

    return 0;
}