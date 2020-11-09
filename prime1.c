#include<stdio.h>
#include<math.h>
int main()
{
	int num, i, flag, upper, lower, j;
	printf("Enter the lower and the upper limits : ");
	scanf("%d%d", &lower, &upper);
	for(i=lower; i<=upper; i++)
	{
		flag=1;
		for(j=2; j<sqrt(i); j++)
		{
		if(i%j==0)
		{
			flag=0;
			break;
		}
		}
		if (flag==1)
		{
			printf("%d\t", i);
		}
	}
	return 0;
}
