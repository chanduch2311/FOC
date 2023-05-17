#include <stdio.h>
#include<conio.h>

int main ()
{
int n,num,large,i=0;
printf("enter the limit :\n");
scanf("%d",&n);
printf("enter the string :\n");
while (i<n)
{
scanf("%d",&num);
if(num>large)
{
large = num;
}
i=i+1;
}
printf("larger %d",large);	
	return 0;
}
