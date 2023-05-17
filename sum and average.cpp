#include<stdio.h>
#include<conio.h>

int main()
{
	int n,i,sum=0;
	float avg;
	printf("enter a number :\n");
	scanf("%d",&n);
	for (i=0;i<=n;i++)
	sum+=i;
	printf("the sum:%d",sum);
	avg=(float)sum/n;
	printf("average:%f",avg);
	return 0;
}
