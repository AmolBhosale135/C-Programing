#include<stdio.h>
int main()
{

 int i,n,j,flag=1;
printf("Enter number:");
scanf("%d",&n);
for(j=2;j<=n;j++)
{
 flag=1;
 for(i=2;i<=j/2;i++)
 {
   if(j%i==0)
    {
       flag=0;
        break;
   }
  }


if(flag==1)
{
 printf("prime number=%d",j);
}
}
return 0;

}
