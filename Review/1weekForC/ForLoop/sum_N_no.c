#include<stdio.h>

int main()
{
    int i,n;
    int sum=0;

    printf("Enter No");
    scanf("%d",&n);

    for ( i = 0; i <=n; i++)
      {
          sum=sum+i;
    }
        printf("%d\n",sum);

    return 0;
    
}