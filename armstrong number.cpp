#include <stdio.h>
int main()
{
	int n,r,sum=0;
	printf("Enter a number:");
	scanf("%d",&n);
	int temp=n;
	while(n>0)
	{
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	printf("sum of number is %d\n",sum);
	if(sum==temp)
	{
		printf("Armstrong number:%d",temp);
	}
	else
	{
		printf("Not Armstrong number:%d",temp);
	}
	
}
