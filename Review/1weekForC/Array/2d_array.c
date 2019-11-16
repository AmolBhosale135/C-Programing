#include<stdio.h>

int main()
{
    int i,j;
    int arr[2][2]={1,2,3,4};

    // printf("%d\n",arr[0][0]);
    // printf("%d\n",arr[0][1]);
    // printf("%d\n",arr[1][0]);
    // printf("%d\n",arr[1][1]);

    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            printf("array  [%d][%d] %d\n",i,j,arr[i][j]);
        }
        
    }
    
    return 0;
}