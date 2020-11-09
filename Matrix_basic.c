#include<stdio.h>

int main()
{
	int a[50][100], row, col, i, j;
	printf("\nEnter the no. of rows and columns\n");
	scanf("%d%d",&row,&col);
	printf("\nEnter values into matrix\n");
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			scanf("%d",&a[i][j]);
	printf("\nValues of the matrix are\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
			printf("%d\t",a[i][j]);
		printf("\n");
	}
	
}
