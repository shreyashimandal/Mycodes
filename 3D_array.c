#include<stdio.h>
int main()
{
	int a[3][4][6], i, j, k, max, min;
	printf("Enter the values in the array : \n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<4; j++)
		{
			for(k=0; k<6; k++)
			{
				scanf("%d", &a[i][j][k]);
			}
		}
	}
	printf("The values are : \n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<4; j++)
		{
			for(k=0; k<6; k++)
			{
				printf("%d\t", a[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
	max=a[0][0][0];
	min=a[0][0][0];
	for(i=0; i<3; i++)
	{
		for(j=0; j<4; j++)
		{
			for(k=0; k<6; k++)
			{
				if(max<a[i][j][k])
				{
					max=a[i][j][k];
				}
			}
		}
	}
		for(i=0; i<3; i++)
	{
		for(j=0; j<4; j++)
		{
			for(k=0; k<6; k++)
			{
				if(min>a[i][j][k])
				{
					min=a[i][j][k];
				}
			}
		}
	}
	printf("The largest value is : %d\n", max);
	printf("The lowest value is : %d", min);
	return 0;
}
