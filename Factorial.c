#include<stdio.h>
int main()
{
	int num, fact;
	scanf("%d", &num);
	fact=1;
	while(num>0)
	{
		fact=fact*num;
		num=num-1;
	}
	printf("Factorial is %d", fact);
	return 0;
}
