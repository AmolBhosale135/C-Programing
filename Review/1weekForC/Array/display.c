#include<stdio.h>

int main()
{

int i;
int age[5]={17,18,19,20,21};

// printf("%d\n",age[0]);
// printf("%d\n",age[1]);
// printf("%d\n",age[2]);
// printf("%d\n",age[3]);
// printf("%d\n",age[4]);

for ( i = 0; i<=4; i++)
{
    printf("array index of age[%d] and its value %d\n",i, age[i]);
}


    return 0;
}