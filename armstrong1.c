#include<stdio.h>
int main()
{
	int num, temp, sum=0, num1;
	scanf("%d", &num);
	num1=num;
	while(num>0)
	{
		temp=num%10;
		sum=sum+temp*temp*temp;
		num=num/10;
	}
	if(sum==num1)
	{
		printf("It is an armstrong number");
	}
	else
	{
		printf("It is not an armstrong number");
	}
	return 0;
}
