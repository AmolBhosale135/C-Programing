#include<stdio.h>

int main()
{
    int i=1,rem,n,arm=0,ab,as,ad=0,temp;
    // int cubes,armstrong;

    printf("Enter Any Digits of No");
    scanf("%d",&n);
    temp=n;
    while (n>=i)
    {
       rem=n%10;
       arm=rem;
    ab=(arm)*(arm)*(arm);

         ad=ad+ab;
      //  printf("ll%d\n",rem);
      //  printf("kk%d\n",ad);


       n=n/10;
   //  as=as+ab;
   //     printf("pp%d\n",as);
   //      ad==as;
      //  printf("zz%d\n",ad);
 


    //    arm=n;

    //     ab=arm*arm*arm;

    //    printf("inside%d",ab);

    

    }
          
 if (ad==temp)
    {
    printf("Armstrong no");
    }
    else
    {
       printf("Not Armstrrong");
    }
    
   
    
    
   

 return 0;
}



 
    //  for (i=0; i<=n; i++)
    //  {
    //     rem=n%10;
	//       printf("aaaa%d\t",rem); 
	//       n=n/10;
    //  printf("Lo%d\t",n);

    //       cubes=rem;

    //         arm=cubes*cubes*cubes;
    //  printf("Loop%d\t",arm);

    //         arm+=arm;
    //  printf("outSideLoop%d\t",arm);
    // //  printf("TheoutSideLoop%d",n);


    //  }