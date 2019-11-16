#include<stdio.h>
int main()
{
    int no,temp;
    printf("Enter Any No\n");
    scanf("%d",&no);

    if (no<0)
    {
        temp=(-0-no);
        printf("%d\n",temp);
    }
    else
    {
        printf("%d\n",no);
    }
    return 0;
    
}