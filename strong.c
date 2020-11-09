#include<stdio.h>
int main()
{
	int num, sum=0, temp, i, multi=1, num1;
	printf("Enter a number : ");
	scanf("%d", &num);
		num1=num;
	while(num>0)
	{
		multi=1;
		temp=num%10;
		num=num/10;
		for(i=1; i<=temp; i++)
		{
			multi=multi*i;
			printf("multi=%d\n", multi);
		}
		sum=sum+multi;
		printf("sum=%d\n", sum);
	}
	if(num1==sum)
	{
		printf("It is a strong number");
	}
	else
	{
		printf("It is not a strong number");
	}
	return 0;
}
