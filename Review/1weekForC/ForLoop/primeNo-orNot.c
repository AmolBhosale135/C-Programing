#include<stdio.h>

int main()
{
    int i,n;

     printf("Enter No Upto Pow Of this Its ");
    scanf("%d",&n);
    
    for (i=2;i<=n-1;i++)
    {
     if(n%i==0)
		{
		printf("Not Prime");
		break;

		}
	}

      if (n==i)
     {
    
	    printf("Prime ");
        // break;
     }
     
    return 0;
}