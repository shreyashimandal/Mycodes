#include<stdio.h>

int main()
{
	int std[100][4], i,j, sum[100], max, max1, r1, r2;
	printf("Enter the marks of each student in three subjects : \n");
	for(i=0;  i<5; i++)
	{
		for(j=1; j<4; j++)
		{
			scanf("%d", &std[i][j]);
		}
	}
	printf("The marks are : \n");
	for(i=0;  i<5; i++)
	{
		for(j=1; j<4; j++)
		{
			printf("%d\t", std[i][j]);
		}
		printf("\n");
	}
	for(i=0; i<5; i++)
	{
		sum[i]=0;
		for(j=1; j<4; j++)
		{
			sum[i]=sum[i]+std[i][j];
		}
	}
	printf("The total marks obtained by each student is : \n");
	for(i=0; i<5; i++)
		{
			printf("%d\n", sum[i]);
		}
	for(j=1; j<4; j++)
	{
		max1=std[0][0];
		r1=0;
		for(i=0; i<5; i++)
		{
			if(max1<std[i][j])
			{
				max1=std[i][j];
				r1=i+1;
			}
		}
		printf("The highest marks in %dth subject is : %d\n", j, max1);
		printf("And it is obtained by roll : %d\n", r1);
		
	}
	max=sum[0];
	for(i=1; i<5; i++)
	{
		if(max<sum[i])
		{
			max=sum[i];
			r2=i+1;
			printf("r2= %d", r2);	
		}
	}
	printf("The maximum total marks is : %d\n", max);
	
	printf("And it is obtained by roll : %d", r2);
	
	return 0;
}
