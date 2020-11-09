#include<stdio.h>
int main()
{
	int region[3][3], i, j, sum[3];
	printf("Enter the value of product sales for 3 years for each products : \n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%d", &region[i][j]);
		}
	}
	printf("The values are : \n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d\t", region[i][j]);
		}
		printf("\n");
	}
	for(j=0; j<3; j++)
	{
		sum[j]=0;
		for(i=0; i<3; i++)
		{
			sum[j]=sum[j]+region[i][j];
		}
	}
	for(j=0; j<3; j++)
	{
		printf("The product wise total of the %dth year is : %d\n", (j+1), sum[j]);
	}
	return 0;
}
