#include<stdio.h>

int main()
{
    int i,a;
    char ch;  

    for ( i = 33; i < 127; i++)
    {
       ch=i;
       a=i;
            printf("%c=%d\n",ch,a);
         
    }
    
    return 0;

}