#include<stdio.h>
int main()
{
	int upper, lower, i,j, flag=1, count=0;
	printf("Enter the range : ");
	scanf("%d %d", &upper, &lower);
	for(i=upper; i<=lower; i++)
	{
		flag=1;
		for(j=2; j<=i/2; j++)
		{
			if(i%j==0)
			{
			flag=0;
			break;
			}
		}
		if(flag==1)
		{
			printf("%d\n", i);
		}		
	}
	//printf("%d", count);
	return 0;
}
