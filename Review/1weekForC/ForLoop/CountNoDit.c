#include<stdio.h>

int main()
{
    int i, n,temp;

    printf("Enter Any no");
    scanf("%d",&n);
    for ( i = 0; i<n; i++)
    {
        temp=i;
        temp++;
    printf("Loop %d\n",temp);    

    }
    printf("%d\n",temp);    
    return 0;
}