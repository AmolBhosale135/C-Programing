#include<stdio.h>

int main()
{
    // int a=5;
    // int b=10;
    int a ,b;
    printf("Enter No\n");
    scanf("%d\n%d",&a,&b);

    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d,%d",a,b);
    return 0;
}