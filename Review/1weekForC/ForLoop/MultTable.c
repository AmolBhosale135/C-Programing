#include<stdio.h>

int main()
{
    int i,n,mult;
    printf("Enter any Table No");
    scanf("%d",&n);

    for ( i = 1; i <=10; i++)
    {
        mult=n*i;
        printf("%d\n",mult);
    }
    return 0;
}