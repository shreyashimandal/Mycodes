#include<stdio.h>
int main()
{
	int num, flag=1, i;
	printf("Enter a number : ");
	scanf("%d", &num);
	for(i=2; i<=num/2; i++)
	{
		if(num%i==0)
		{
			flag=0;
		}
	}
	if(flag==1 && num>=2)
	{
		printf("It is a prime  number");
	}
	else
	{
		printf("It is not a prime number");
	}
	return 0;
}
