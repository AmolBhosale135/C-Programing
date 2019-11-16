#include<stdio.h>

int main()
{
    int i,n,factor;

     printf("Enter No to Factor Of: ");
    scanf("%d",&n);

    for ( i = 2; i<=n; i++)
    {  if(n%i==0)
        {
                    printf("%d\n",i);
        
        }
    }
    return 0;
}