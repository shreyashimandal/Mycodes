#include<stdio.h>
int main()
{
	int a1[10][10],a2[10][10],a3[10][10], row, col, i, j;
	printf("\nEnter the no. of rows and columns of the first matrix\n");
	scanf("%d%d",&row,&col);
	printf("\nEnter values into the first matrix\n");
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			scanf("%d",&a1[i][j]);
	printf("\nValues of the first matrix are\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
			printf("%d\t",a1[i][j]);
		printf("\n");
	}
	printf("\nEnter the no. of rows and columns of the second matrix\n");
	scanf("%d%d",&row,&col);
	printf("\nEnter values into the second matrix\n");
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			scanf("%d",&a2[i][j]);
	printf("\nValues of the second matrix are\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
			printf("%d\t",a2[i][j]);
		printf("\n");
	}
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			a3[i][j]=a1[i][j]+ a2[i][j];
	printf("\nValues of the added matrix are\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
			printf("%d\t",a3[i][j]);
		printf("\n");
	}
	return 0;
}
