#include<stdio.h>
#include<math.h>
int main()
{ int i,n,sum=0;
printf("enter a number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum+=pow(i,i); }
printf("%d",sum);
return 0;
} 


