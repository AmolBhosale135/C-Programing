#include<stdio.h>

int main()
{
    int n, temp,rem;
    printf("Enter Amount Of Rupees");
    scanf("%d",&n);
    if (n<0)
    {
           printf("Notes are Not Negative No");

    }

         if(n>=2000)
        {
            temp=n/2000;
            printf("2000Rs-Notes    :%d\n",temp);
            rem=n%2000;
        //    printf("Rem-2000Rs:%d\n",rem);
            
        }
           if (rem>=1000)
        {
            temp=rem/1000;
           printf("1000Rs-NOtes:%d\n",temp);
           rem=n%1000;
        //    printf("Rem-1000Rs:%d\n",rem);

            
        }
         if (rem>=500)
        {
            temp=rem/500;
           printf("500Rs-Notes:%d\n",temp);
           rem=n%500;
        //    printf("Rem-500Rs:%d\n",rem);
    
        }
           if (rem>=100)
        {
            temp=rem/100;
           printf("100Rs-Notes:%d\n",temp);
           rem=n%100;
        //    printf("Rem-100Rs:%d\n",rem);


            
        }
           if (rem>=100)
        {
          temp=rem/50;
           printf("50Rs-Notes:%d\n",temp);
           rem=n%50;
        //    printf("Rem-50Rs:%d\n",rem);

            
        }
           if (rem>=50)
        {
          temp=rem/10;
           printf("1Rs-coins:%d\n",temp);
           rem=n%10;
        //    printf("Rem-10Rs:%d\n",rem);

            
        }
        //   else if (temp<10)
        // {
        //    printf("%d",temp);   
        // } 
            
        




        //  else if ((n<2000)&&(n>1000))
        // {
        //     temp=n/1000;
        //    printf("1000Rs:%d",temp);

            
        // }
        //   else if ((n<1000)&&(n>500))
        // {
        //     temp=n/500;
        //    printf("500Rs:%d",temp);

           
            
        // }
        //   else if ((n<500)&&(n>100))
        // {
        //     temp=n/100;
        //    printf("100Rs:%d",temp);

            
        // }
        //   else if ((n<100)&&(n>50))
        // {
        //   temp=n/50;
        //    printf("50Rs:%d",temp);
            
        // }
        //   else if ((n<50)&&(n>10))
        // {
        //   temp=n/10;
        //    printf("10Rs:%d",temp);
            
        // }
        //   else if (n<10)
        // {
        //    printf("%d",n);

           
            
        // }
            
    return 0;
}