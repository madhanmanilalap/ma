#include<stdio.h>
void main()
{
int a,n;
printf("Enter the value of a:");
scanf("%d",&a);
n=0;
while(n!=0)
{
a/=10;
n++;
}
printf("No of Digits:%d",n);
}
