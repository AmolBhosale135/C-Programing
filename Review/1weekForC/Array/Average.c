#include<stdio.h>

int main()
{
    int mark[5];
    int i,n,sum=0,avg;
    printf("Enter no");
    scanf("%d",&n);

    for (i=0; i<n; i++)
    {
            printf("Enter subject marks");
            scanf("%d",&mark[i]); 

    }
    for ( i = 0; i < n; i++)
    {
    // printf("Show Data %d\n",mark[i]);
        sum=sum+mark[i];
        // printf("sum of %d\n",sum);
    }
        avg=sum/5;
        printf("Average of %d",avg);
    

    return 0;
}