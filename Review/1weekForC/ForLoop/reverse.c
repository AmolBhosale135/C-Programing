#include<stdio.h>

int main()
{
    int i,n,rem;

    printf("Enter Any Digits of No");
    scanf("%d",&n);
    
     for (i=0; i<=n; i++)
     {
        rem=n%10;
	      printf("%d",rem); 
	      n=n/10;
     }

 return 0;
}