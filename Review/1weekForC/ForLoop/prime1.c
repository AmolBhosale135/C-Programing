#include<stdio.h>

int main()
{
int i,n;
	printf("Enter number");
	scanf("%d",&n);
	for(i=2;i<=n-1;i++)
	{
		if(n%i==0)
		{
		printf("Not Prime");
		
		}
	}
	printf("Prime ");
	return 0;
}