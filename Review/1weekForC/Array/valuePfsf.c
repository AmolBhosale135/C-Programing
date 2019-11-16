#include<stdio.h>

int main()
{
int i,n;
int marks[n];
int sum=0;
printf("Enter number of students: ");
scanf("%d",&n);

for(i=0;i<n;i++){
printf("Enter marks of student%d: ",i+1);
scanf("%d",&marks[i]); //saving the marks in array
sum+=marks[i];
}
printf("Sum of marks = %d",sum);

return 0;
}