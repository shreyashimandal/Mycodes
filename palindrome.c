#include<stdio.h>
int main()
{
	int num, temp, reverse=0, num1;
	scanf("%d", &num);
	num1=num;
	while(num>0)
	{
		temp= num%10;
		reverse=reverse*10+temp;
		num=num/10;
	}
	if(reverse==num1)
	{
		printf("It is a palindrome number");
	}
	else
	{
		printf("It is not a palindrome number");
	}
		return 0;
}
