#include<stdio.h>
int main()
{
int n,i,fact=1;
printf("enter the number:\n");
scanf("%d",&n);
for(i=2;i<=n;i++)
fact*=i;
printf("the factorial is:%d",fact);
return 0;
}
