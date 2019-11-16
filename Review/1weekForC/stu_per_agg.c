#include<stdio.h>

int main()
{
    int m1,m2,m3,m4,m5,m6;
    int sum, per;
    int total=600;

    printf("Enter Subject Marks");
    scanf("%d\n%d\n%d\n%d\n%d\n%d\n",&m1,&m2,&m3,&m4,&m5,&m6);

    sum = m1+m2+m3+m4+m5+m6;
    per=sum*100/total;
    printf("%d",per);

    if(per>=70)
    {
        printf("Distinction\n");
    }
    else if (per>=60 && per<70)
    {
        printf("First class\n");
    }
    else if (per>=50 && per>60)
    {
       printf("second class\n");
    }
    else if (per>=35 && per>50)
    {
       printf("pass class\n");
    }
    else
    {
        printf("fail\n");
    }
    
    
       return 0;
}