#include<stdio.h>

int main()
{
    int i,no,p=0;
    printf("Enter no");
    scanf("%d", &no);

    for ( i=2; i <=no-1; i++)
    {
        if (no%i==0)
        {
            p=1;
        }
    }
    
    if(p==0)
printf("\nThe Given number is prime :%d",no);
else
printf("\nThe number is NOT prime :%d",no);
        
    
    return 0;
}
// || no==2