#include<stdio.h>

int main()
{
	int num, temp, num1, new1=0;
	printf("Enter a number : ");
	scanf("%d", &num);
	num1=num;
	while(num>0)
	{
		temp=num%10;
		new1=new1+ temp*temp*temp;
		num=num/10;
	}
	if(new1==num1)
	{
		printf("%d is an armstrong number", num1);
	}
	else
	{
		printf("%d is not an armstrong number", num1);
	}
	return 0;
}
