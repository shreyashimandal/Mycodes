#include<stdio.h>
int main()
{
	int x, y, gcd=1, max, i;
	printf("Enter two numbers : ");
	scanf("%d %d", &x, &y);
	if(x>y)
	{
		max=x;
	}
	else
	{
		max=y;
	}
	for(i=2; i<=max; i++)
	{
		if(x%i==0 && y%i==0)
		{
			gcd=i;
		}
	}
	printf("%d", gcd);
	return 0;
}
