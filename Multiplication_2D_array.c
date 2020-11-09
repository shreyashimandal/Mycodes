#include<stdio.h>
int main()
{
	int a1[10][10],a2[10][10],a3[10][10], row1, col1, row2, col2, k, i, j;
	printf("\nEnter the no. of rows and columns of the first matrix\n");
	scanf("%d%d",&row1,&col1);
	printf("\nEnter values into the first matrix\n");
	for(i=0;i<row1;i++)
		for(j=0;j<col1;j++)
			scanf("%d",&a1[i][j]);
	printf("\nValues of the first matrix are\n");
	for(i=0;i<row1;i++)
	{
		for(j=0;j<col1;j++)
			printf("%d\t",a1[i][j]);
		printf("\n");
	}
	printf("\nEnter the no. of rows and columns of the second matrix\n");
	scanf("%d%d",&row2,&col2);
	printf("\nEnter values into the second matrix\n");
	for(i=0;i<row2;i++)
		for(j=0;j<col2;j++)
			scanf("%d",&a2[i][j]);
	printf("\nValues of the second matrix are\n");
	for(i=0;i<row2;i++)
	{
		for(j=0;j<col2;j++)
			printf("%d\t",a2[i][j]);
		printf("\n");
	}
	for(i=0;i<row1;i++)
	{
	for(j=0;j<col2;j++)
	{
		a3[i][j]=0;
		for(k=0;k<col1;k++)
		{
			a3[i][j] = a3[i][j]+a1[i][k]*a2[k][j];
		}
	}
	}
	printf("\nValues of the multiplied matrix are\n");
	for(i=0;i<row1;i++)
	{
		for(j=0;j<col2;j++)
			printf("%d\t",a3[i][j]);
		printf("\n");
	}
	return 0;
}
