#include<stdio.h>
int main()
{
	int upper, lower, i, j,temp,sum=0, temp1, temp2,n=0;
	printf("Enter the range : ");
	scanf("%d %d", &lower, &upper);
	for(i=lower; i<=upper; i++)
	{
		temp1=i;
		temp2=i;
		while(temp1>0)
		{
			temp1=temp1/10;
			n=n+1;
			printf("%d", n);
		}
		while(temp2>0)
		{
			
			temp=temp2%10;
			sum=sum+pow(temp,n);
			temp2=temp2/10;
		}
		if(sum==i)
		{
			printf("%d", sum);
		}
	n=0;
	sum=0;
	}
	return 0;
}
