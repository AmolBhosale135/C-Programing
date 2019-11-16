#include<stdio.h>

int main()
{
    int i,j,a,b,lcm,temp=0,temp1=0;
    printf("Enter 1st No");
    scanf("%d",&a);
    printf("Enter 2nd No");
    scanf("%d",&b);

    for ( i = 1; i<=10; i++)
    {
        temp=i*a;
          
          for (j = 1; j<=temp; j++)
          {
        temp1=i*b;

            
          
          if (temp==temp1)
        {
            printf("temp: %d\n",temp);
            printf("temp1: %d\n",temp1);
            break;
        }
          }

    

        printf("%d\t",temp);
        printf("%d\n",temp1);
      
        


    }
    

    return 0;
}