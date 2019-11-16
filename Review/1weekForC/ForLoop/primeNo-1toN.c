#include<stdio.h>

int main()
{
    
    int i,n,j,flag=1,prime;

    printf("Enter No  ");
    scanf("%d",&n);

    for ( j = 2;  j<=n; j++)
   {

       flag = 1;

        // printf("%d\t%d\n",n,j);
    for ( i = 2; i<=j/2; i++)
    {
        // printf("innerFor %d\t",i);

        if (j%i==0)
        {
           flag=0;
            break;
        }
        
    }
    // printf("%d\n",flag);


    if (flag==1)
    {
        printf("%d\t",j);

        // printf("Its Prime No\n");
    }
     
    }
            return 0;
}