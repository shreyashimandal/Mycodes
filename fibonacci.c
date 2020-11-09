#include<stdio.h>
int main()
{
	int num1=0, num2=1, num3=0, n;
	scanf("%d", &n);
	while(num3<n)
	{
		printf("%d", num3);
		num1=num2;
		num2=num3;
		num3=num1+num2;
		
	}
	return 0;
}
