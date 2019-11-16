#include<stdio.h>

int main()
{
    int i,n;
    printf("Enter a No below 127 for words ");
    scanf("%d",&n);

    for ( i = 0; i < 127; i++)
    {
        if (i==n)
        {
            printf("%c\n",n);
            break;
        }
        else
        {
            /* code */
        }
        
        
        
    }
    
    return 0;

}