#include<stdio.h>

int main()
{
 float SI,P,N,R;
 printf("Enter values of P, N and R: ");
 scanf("%f%f%f",&P,&N,&R);
 SI=(P*N*R)/100;
 printf("Simple interest = : %f",SI);
 return 0;
}