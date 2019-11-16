#include<stdio.h>

int main()
{
    {
        float a;
       printf("%f",a);
 
    printf("FIRST CONDITION\n");
    if(sizeof(a)==sizeof(10.5))
        printf("Matched");
    else
        printf("Not matched");
 
    printf("SECOND CONDITION\n");
    if(sizeof(a)==sizeof(10.5f))
        printf("Matched");
    else
        printf("Not matched");
 
    printf("THIRD CONDITION\n");
    if(sizeof((double)a)==sizeof(10.5))
        printf("Matched");
    else
        printf("Not matched");
 
    printf("FOURTH CONDITION\n");
    if(a==10.5f)
        printf("Matched");
    else
        printf("Not matched");
 
    printf("\n");
}
    return 0;
}